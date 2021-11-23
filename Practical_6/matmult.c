#include <stdio.h>
#include <math.h>
#define n 5
#define p 4
#define q 3

// the struct of the matrix
struct matrix {
    int C[n][q];
};

// the function that multiply two matrices.
struct matrix matmult(int A[n][p], int B[p][q]) {

    struct matrix m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < q; j++) {
            int sum = 0;
            for(int k = 0; k < p; k++) {
                sum += A[i][k] * B[k][j];
            }
            m.C[i][j] = sum;
        }
    }
    return m;
}