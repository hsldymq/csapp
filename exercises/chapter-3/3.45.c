// A.
struct {
    char *a; // 0:8
    short b; // 8:2
    double c; // 16:8
    char d; // 24:1
    float e; // 28:4
    char f; // 32:4
    long g; // 40:8
    int h; // 48:4
} rec;

// B. 56字节

// C. 40字节
struct {
    char *a; // 0:8
    double c; // 8:8
    long g; // 16:8
    float e; // 24:4
    int h; // 28:4
    short b; // 32:2
    char d; // 34:1
    char f; // 35:1
} rec_min;