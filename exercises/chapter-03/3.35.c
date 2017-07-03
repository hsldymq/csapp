// A. 保存x的值

// B.
long rfun(unsigned long x) {
    if (!x) {
        return 0;
    }
    unsigned long nx = x >> 2;
    long rv = rfun(nx);
    return x + rv;
}