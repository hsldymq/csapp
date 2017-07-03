/*
 * A
 *----------------------------
 * testq	%rsi, %rsi
 * je	.L1
 * cmpq	%rdi, (%rsi)
 * jge	.L1
 * movq	%rdi, (%rsi)
 * .L1:
 * rep ret
 */
void cond(long a, long *p) {
    if (!p || a <= *p) {
        goto ret;
    }
    *p = a;
    ret:
    return;
}

// B. 因为if语句中执行了两次判断(p和a > *p),所以对应了两个汇编条件分之