#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

bool tmult_ok(int x, int y) {
    int64_t sum = (int64_t)x * y;

    return !!(sum >> 32);
}

int main(void) {
    int x, y;

    printf("input x and y(format: x * y): ");

    scanf("%d * %d", &x, &y);

    printf("result: %lld\n", (int64_t)x * y);
    printf("overflow status: %d\n", tmult_ok(x, y));

    return 0;
}