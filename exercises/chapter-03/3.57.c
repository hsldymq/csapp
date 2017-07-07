double funct3(int *ap, double b, long c, float *dp) {
    float d = *dp;
    if (b > *ap) {
        return c * d;
    }
    
    return d * 2 + c;
}