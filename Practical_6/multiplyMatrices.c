#include <stdio.h>
#include <math.h>


int main(void) {
    int n = 5, p = 4, q = 3;
    int A[n][p];
    int B[p][q];
    int C[n][q];
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

    // multiply two matrices
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < q; j++) {
            int sum = 0;
            for(int k = 0; k < p; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }

    //print the matrices A, B and C
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
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}