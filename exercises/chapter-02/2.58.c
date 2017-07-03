#include <stdio.h>
#include <stdbool.h>

bool is_little_endian() {
    short x = 1;
    char *byte_ptr = (char *)&x;

    return !!(*byte_ptr);
}

int main(void) {
    if (is_little_endian()) {
        printf("This is a little endian computer\n");
    } else {
        printf("This is a big endian computer\n");
    }

    return 0;
}