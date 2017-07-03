#define N 16
typedef int fix_matrix[N][N];

void fix_set_diag_opt(fix_matrix A, int val) {
    int *Aptr = &A[0][0];
    int *Aend = &A[N][N];

    do {
        *Aptr = val;
        Aptr += N + 1; 
    } while (Aptr != Aend);
}