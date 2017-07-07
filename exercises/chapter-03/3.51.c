/*
 * vcvtsi2dq %rdi, %xmm0
 */
double cvt1(long x) {
    double y = (double) x;
    return y;
}

/*
 * vcvttsd2si %xmm0, %eax
 */
int cvt2(double x) {
    int y = (int) x;
    return y;
}

/*
 * vmovddup %xmm0, %xmm0
 * vcvtpd2sx %xmm0, %xmm0
 */
float cvt3(double x) {
    float y = (float) x;
    return y;
}

/*
 * vcvtsi2ssq %rdi, %xmm0, %xmm0
 */
float cvt4(long x) {
    float y = (float) x;
    return y;
}

/*
 * vcvttss2siq %xmm0, %rax
 */
long cvt5(float x) {
    long y = (long) x;
    return y;
}