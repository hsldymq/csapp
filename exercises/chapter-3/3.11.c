/*
 * A. 实现了%rdx清零操作
 * B. movq $0, %rdx
 * C. 除了对单字节的操作,多字节下 xor 指令大小 都比 mov 指令小
 */
int main(void) {
    asm(
        "xorb %al, %al\n" \
        "movb $0, %al\n" \
        "xorw %ax, %ax\n" \
        "movw $0, %ax\n" \
        "xorl %eax, %eax\n" \
        "movl $0, %eax\n" \
        "xorq %rax, \%rax\n" \
        "movq $0, \%rax");

    return 0;
}  
