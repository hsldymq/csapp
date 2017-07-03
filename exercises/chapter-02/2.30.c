#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include <limits.h>
  
/**
 * 版本1: 直接判断两个参数同号且和不同号的情况
 */
bool tadd_ok_v1(int x, int y) {
    if ((x > 0 && y > 0 && x + y < 0) ||
        (x < 0 && y < 0 && x + y >= 0)
    ) {
        return false;
    }

    return true;
}

/**
 * 版本2: 零判断版本. 只要两个同号,并且两数之和与其中任何一个数不同号,就代表溢出了
 */
bool tadd_ok_v2(int x, int y) {
    int sign = ~INT_MAX;
    int sign_x = !!(x & sign);
    int sign_y = !!(y & sign);
    int sign_sum = !!((x + y) & sign);

    return !(!(sign_x ^ sign_y) & (sign_x ^ sign_sum));
}

int main(void) {
    unsigned repeat_times = 100000000;
    clock_t start, end;

    start = clock();
    for (unsigned i = 0; i < repeat_times; i++) {
        assert(tadd_ok_v1(INT_MAX, INT_MIN) == true);
        assert(tadd_ok_v1(INT_MAX, INT_MAX) == false);
        assert(tadd_ok_v1(INT_MIN, INT_MIN) == false);
    }
    end = clock();
    printf("v1 test ok. run time :%f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    start = clock();
    for (unsigned i = 0; i < repeat_times; i++) {
        assert(tadd_ok_v2(INT_MAX, INT_MIN) == true);
        assert(tadd_ok_v2(INT_MAX, INT_MAX) == false);
        assert(tadd_ok_v2(INT_MIN, INT_MIN) == false);
    }
    end = clock();
    printf("v2 test ok. run time :%f seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}