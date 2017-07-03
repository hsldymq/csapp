/*
 * testq %rdi, %rdi
 * setge %al
 */
int test_A(long a) {
    return a >= 0;
}

/*
 * testw %di, %di
 * sete %al
 */
int test_B(short a) {
    return a == 0;
}

/*
 * testb %dil, %dil
 * seta %al
 */
int test_C1(unsigned char a) {
    return a > 0;
}

/*
 * testb %dil, %dil
 * seta %al
 */
int test_C2(unsigned char a) {
    return a != 0;
}

/*
 * testl %edi, %edi
 * setne %al
 */
int test_D1(int a) {
    return a != 0;
}

/*
 * testl %edi, %edi
 * setne %al
 */
int test_D2(unsigned int a) {
    return a > 0;
}