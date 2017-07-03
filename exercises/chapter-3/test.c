#include <stdio.h>

int main(void) {
    int a = 0xffffff73;
    int b = 0x4005ed;
    printf("%d\n", a);
    printf("%x\n", b - 141);

    return 0;
}