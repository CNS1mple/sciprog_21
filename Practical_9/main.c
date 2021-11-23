#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "magic_square.h"

int main(void) {
    int n;
    //open the file matrix first
    FILE *fp = fopen("matrix.csv", "r");
    // if we can't open the file, we need to throw an error
    if(!fp) {
        printf("can't open file!\n");
        return 0;
    }
    // read the size n of the matrix 
    fscanf(fp, "%d\n", &n);

    // Allocating space to the two dimensional array
    int ** square = (int **) malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++) {
        square[i] = (int*) malloc(n * sizeof(int));
    }

    // read the matrix and store it in the array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            fscanf(fp, "%d", &square[i][j]);
        }
    }
    // print the matrix
    printf("The matrix is: \n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", square[i][j]);
        }
        printf("\n");
        
    }
    // check if the matrix is a magic square matrix
    int res = isMagicSquare(square,n);
    if(res) printf("The matrix is a magic square. \n");
    else printf("The matrix is not a square matrix. \n");

    
}