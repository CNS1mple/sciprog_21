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

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            A[i][j] = i + j;
        }
    }

    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            B[i][j] = i - j;
        }
    }

    m = matmult(A, B);

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

