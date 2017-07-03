/*
 * A.
 * cmpl %esi, %edi
 * setl %al
 */
int comp_A(int a, int b) {
    return a < b;
}

/*
 * B.
 * cmpw %si, %di
 * setge %al
 */
int comp_B(short a, short b) {
    return a >= b;
}

/*
 * C.
 * cmpb %sil, %dil
 * setbe %al
 */
int comp_C(unsigned char a, unsigned char b) {
    return a <= b;
}

/*
 * D.
 * cmpq %rsi, %rdi
 * setne %al
 */
int comp_D(long a, long b) {
    return a != b;
}