#include <stdio.h>
#include <math.h>
#include "matmult.c"
#define n 5
#define p 4
#define q 3


int main(void) {
    int A[n][p];
    int B[p][q];
    struct matrix m;

    // set matrix A
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }
    // set matrix B
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    // use the function matmult to multiply the matrix A and B
    m = matmult(A, B);

    // print the A, B, C

    printf("A: \n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("B: \n");

    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("C: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < q; j++) {
            printf("%d ", m.C[i][j]);
        }
        printf("\n");
    }
}

