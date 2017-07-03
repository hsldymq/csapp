// A.
long fun_b(unsigned long x) {
    long val = 0;
    long i;

    for (i = 64; i; i--) {
        val = (x & 1) | (val << 1);
        x >>= 1;
    }
    return val;
}

// B. 因进行条件判断的变量被初始化赋予了一个常数64,初始情况下它一定满足条件,所以省略掉了初次判断
// C. 将x的二进制逆序排列后返回其值