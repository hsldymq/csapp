long loop_while(long a, long b) {
    long result = b;
    while (b > 0) {
        result = result * a;
        b = b - a;
    }
    return result;
}