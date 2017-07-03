/*
 * movq %rdi, %rax
 * salq $4, %rax
 * movl %esi, %ecx
 * sarq %cl, %rax
 * ret
 */
long shift_left4_rightn(long x, long n) {
    x <<= 4;
    x >>= n;

    return x;
}