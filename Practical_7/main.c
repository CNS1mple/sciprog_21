#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int *allocatearray(int N) {
    int *p;
    p = (int *)malloc(N * sizeof(int));
    return p;
}

void fillwithones(int *p, int n) {
    for(int i = 0; i < n; i++) {
        p[i] = 1;
    }
}

void printarray(int *p, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d\n", p[i]);
    }
}

void free_m(int *p) {
    free(p);
}


int main(void) {
    int n;
    int ns[3] = {5, 10, 15};
    for(int i = 0; i < 3; i++) {
        n = ns[i];
        int *p = allocatearray(n);
        fillwithones(p, n);
        printf("n = %d\n", n);
        printarray(p, n);
        free_m(p);
    }
}