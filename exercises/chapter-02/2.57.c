#include <stdio.h>

void show_short(short x) {
    unsigned number_of_bits = sizeof(short) * 8;
    int bit;

    for (int i = number_of_bits - 1; i >= 0; i--) {
        bit = !!(x & (1 << i));
        printf("%d", bit);
    }

    printf("\n");
}

void show_long(long x) {
    unsigned number_of_bits = sizeof(long) * 8;
    int bit;

    for (int i = number_of_bits - 1; i >= 0; i--) {
        bit = !!(x & (1 << i));
        printf("%d", bit);
    }

    printf("\n");
}

void show_double(double x) {
    unsigned size_of_double = sizeof(double);
    unsigned number_of_bits = size_of_double * 8;
    char *byte_ptr = (char *)&x;
    int bit;

    for (int i = number_of_bits - 1; i >= 0; i--) {
        bit = !!((*(byte_ptr + i / size_of_double)) & (1 << (i % 8)));
        printf("%d", bit);
    }

    printf("\n");
}


int main(void) {
    short s;
    long l;
    double d;

    printf("input short, long, double:");
    scanf("%d,%d,%lf", &s, &l, &d);

    printf("bits of short value: ");
    show_short(s);
    printf("bits of long value: ");
    show_long(l);
    printf("bits of double value: ");
    show_double(d);
}