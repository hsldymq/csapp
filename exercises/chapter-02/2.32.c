#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <assert.h>


bool tadd_ok(int x, int y) {
    if ((x > 0 && y > 0 && x + y < 0) ||
        (x < 0 && y < 0 && x + y >= 0)
    ) {
        return false;
    }

    return true;
}

bool buggy_tsub_ok(int x, int y) {
    return tadd_ok(x, -y);
}

bool correct_tsub_ok(int x, int y) {
    bool result = tadd_ok(x, -y);

    return y == INT_MIN ? !result : result;
}

int main(void)
{
    assert(buggy_tsub_ok(-888, INT_MIN) == false);  // 不应该溢出但是溢出了
    assert(buggy_tsub_ok(1, INT_MIN) == true); // 应该溢出但是没溢出

    assert(correct_tsub_ok(-888, INT_MIN) == true);
    assert(correct_tsub_ok(1, INT_MIN) == false);
    assert(correct_tsub_ok(INT_MAX, -2) == false);
    assert(correct_tsub_ok(5, -6) == true);
    return 0;
}