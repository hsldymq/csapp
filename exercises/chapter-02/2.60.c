#include <stdio.h>
#include <assert.h>

unsigned replace_byte(unsigned x, int i, unsigned char b) {
    unsigned size = sizeof(x);
    assert(i < size);

    return (x & ~(0xff << (i * 8))) | ((unsigned)b << (i * 8));
}

int main(void) {
    unsigned x;
    int i;
    unsigned char b;

    printf("input a number to be replaced, which byte and replaced byte:\n");
    scanf("%d %d", &x, &b);
    printf("input which byte to be replaced byte:\n");
    scanf("%d", &i);

    printf("the number to be replaced is 0x%X, byte %d is about to be replaced, and the byte is 0x%X\n", x, i, b);
    printf("and replaced result is 0x%X\n", replace_byte(x, i, b));

    return 0;
}