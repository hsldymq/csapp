// A. jump to middle

// B. 
long fun_a(unsigned long x) {
    long val = 0;
    while (x != 0) {
        val = val ^ x;
        x = x >> 1;
    }
    return val & 1;
}

// C. 测试x在二进制表示下是否含有奇数个1, 是返回1, 否返回0