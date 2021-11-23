#include <stdio.h>

// calculate the GCD value iteratively
int GCD_iterative(int a, int b) {
    while(b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    int a, b;
    // print the result
    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of a and b: %d\n", GCD_iterative(a, b));
}