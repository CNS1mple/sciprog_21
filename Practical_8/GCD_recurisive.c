#include <stdio.h>

int GCD_recursive(int a, int b) {
    if(!b) return a;
    return GCD_recursive(b, a % b);
}

int main(void) {
    int a, b;
    printf("Please enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of a and b: %d\n", GCD_recursive(a, b));
}