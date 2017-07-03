typedef union {
    struct {
        long u;
        short v;
        char w;
    } t1;
    struct {
        int a[2];
        char *p;
    } t2;
} u_type;

/*
 * movq (%rdi), %rax
 * movq %rax, (%rsi)
 */
void get1(u_type *up, long *desc) {
    *desc = up->t1.u;
}

/*
 * movw 8(%rdi), %ax
 * movw %ax, (%rsi)
 */
void get2(u_type *up, short *desc) {
    *desc = up->t1.v;
}

/*
 * leaq 10(%rdi), %rax
 * movq %rax, (%rsi)
 */
void get3(u_type *up, char* *desc) {
    *desc = &up->t1.w;
}

/*
 * movq %rdi, (%rsi)
 */
void get4(u_type *up, int* *desc) {
    *desc = up->t2.a;
}

/*
 * movq (%rdi), %rax
 * movl (%rdi, %rax, 4), %eax
 * movl %eax, (%rsi)
 */
void get5(u_type *up, int *desc) {
    *desc = up->t2.a[up->t1.u];
}

/*
 * movq 8(%rdi), %rax
 * movb (%rax), %al
 * movb %al, (%rsi)
 */
void get6(u_type *up, char *desc) {
    *desc = *up->t2.p;
}