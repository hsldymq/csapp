long fact_for_while(long n) {
    long i = 2, result = 1;
    while (i <= n) {
        result *= i;
        i++;
    }
    return result;
}

long fact_for_gd_goto(long n) {
    long i = 2, result = 1;
    
    if (i > n) goto done;

    body:
    result *= i;
    i++;
    if (i <= n) goto body;

    done:
    return result;
}