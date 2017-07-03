long lt_cnt = 0;
long ge_cnt = 0;

/*
 * A.
 */
long absdiff_se(long x, long y) {
    long result;

    if (x < y) {
        goto true;
    }
    ge_cnt++;
    result = x - y;
    goto done;

    true:
    lt_cnt++;
    result = y - x;

    done:
    return result;
}

// B. 原方法,更符合原函数的逻辑,更容易翻译