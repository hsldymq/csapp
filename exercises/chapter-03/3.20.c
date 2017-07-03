// A.
#define OP /

/*
 * B. 因为sarq进行3位算数位移等价于除以8, 并且对于负数,这样的位移需要进行偏执来保证这样的出发对正负数都是向零取证
 *----------------------
 * leaq 7(%rdi), %rax
 * testq %rdi, %rdi
 * cmovns %rdi, %rax
 * sarq $3, %rax
 * ret
 */
long arith(long x) {
    return x OP 8;
}