void swicher(long a, long b, long c, long *desc) {
    long val;
    switch(a) {
        case 5:
            c = b ^ 15;
        case 0:
            val = c + 112;
            break;
        case 2:
        case 7:
            val = (b + c) << 2;
            break;
        case 4:
            val = a;
            break;
        default:
            val = b;
    }
    *desc = val;
}