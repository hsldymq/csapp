#include <stdio.h>

int main() {
    int x = 31;
    printf("make x = 31!\n");

    printf("x * 6 = %d, and (x << 2) + (x << 1) = %d\n", x * 6, (x << 2) + (x << 1));
    printf("x * 31 = %d, and (x << 5) - x = %d\n", x * 31, (x << 5) - x);
    printf("x * -6 = %d, and -((x << 2) + (x << 1)) = %d\n", x * -6, -((x << 2) + (x << 1)));
    printf("x * 55 = %d, and (x << 6) - (x << 3) - x = %d\n", x * 55, (x << 6) - (x << 3) - x);

    return 0;
}