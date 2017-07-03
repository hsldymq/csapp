#include <stdio.h>

int combine(int x, int y) {
    return (x & 0xff) | (y & ~0xff);
}

int main(void) {
    int x, y;
    printf("input two number:");
    scanf("%d %d", &x, &y);
    printf("your input are 0x%x and 0x%x\n", x, y);

    printf("and the combination is 0x%x\n", combine(x, y));
}