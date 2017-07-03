#include <stdio.h>

int A(void) {
    int result = 1;
    int i = 2;
    int p;
    do {
        p = result;
        result *= i++;
    } while (result / (i - 1) == p);

    return i - 2;
}

long B(void) {
    long result = 1;
    long i = 2;
    long p;
    do {
        p = result;
        result *= i++;
    } while (result / (i - 1) == p);

    return i - 2;
}

int main(void) {
    printf("%d\n%ld\n", A(), B());

    return 0;
}