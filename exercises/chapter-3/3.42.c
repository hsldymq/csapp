// A.
struct ELE {
    long v;
    struct ELE *p;
};

long fun(struct ELE *ptr) {
    long val = 0;
    while (ptr) {
        val += ptr->v;
        ptr = ptr->p;
    }
    return val;
}

// B. ELE是一个存储长整形值的单向链表, fun用于计算链表内所有值之和
