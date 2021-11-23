#include <stdio.h>

void hanota(int n, int a, int b, int c) {
    // we simply need to move the disc from rod 1 to rod 3
    if(n == 1) {
        printf("%d -> %d\n", a, c); // print the current move we make
        return;
    }
    hanota(n-1, a, c, b);// move n −1 discs from rod 1 to rod 2 (using rod 3 as an intermediary)
    hanota(1, a, b, c); // move the only disc from rod 1 to rod 3
    hanota(n-1, b, a, c); // move the n−1 discs from rod 2 to rod 3, using rod 1 as an intermediary
}

int main(void) {
    int n;
    // read the number of disks n
    printf("Please enter the number N: \n");
    scanf("%d", &n);
    hanota(n,1,2,3);
}