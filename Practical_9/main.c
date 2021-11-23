#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "magic_square.h"

int main(void) {
    int n;
    FILE *fp = fopen("matrix.csv", "r");
    if(!fp) {
        printf("can't open file!\n");
        return 0;
    }
    fscanf(fp, "%d\n", &n);
    int ** square = (int **) malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++) {
        square[i] = (int*) malloc(n * sizeof(int));
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            fscanf(fp, "%d", &square[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
        
    }
    int res = isMagicSquare(square,n);
    if(res) printf("The matrix is a magic square. \n");
    else printf("The matrix is not a square matrix. \n");

    
}