/*
 * leaq 0(, %rdi, 8), %rax
 * testq %rsi, %rsi
 * jle .L2
 * movq %rsi, %rax
 * subq %rdi, %rax
 * movq %rdi, %rdx
 * andq %rsi, %rdx
 * cmpq %rsi, %rdi
 * cmovge %rdx, %rax
 * ret
 * .L2:
 * addq %rsi, %rdi
 * cmpq $-2, %rsi
 * cmovle %rdi, %rax
 * ret
 */
long test(long x, long y) {
    long val = x * 8;
    if (y > 0) {
        if (x < y)
            val = y - x;
        else
            val = x & y;
    } else if (y <= -2)
        val = x + y;
    return val;
}