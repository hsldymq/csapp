#include <stdio.h>
#include <limits.h>

int div16(int n) {
    int neg_flag = n >> 31;

    return (n + (neg_flag << 4) - neg_flag) >> 4;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d divide by 16 is %d",n , div16(n));

    return 0;
}