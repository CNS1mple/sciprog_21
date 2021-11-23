#include <stdio.h>
#include <math.h>


void Fibonacci(int n) {
    int f[100005]; // just in case we don't meet "array out of bounds"
    f[0] = 0;
    f[1] = 1;
    //iteratively calculate the value
    for(int i = 2; i < n; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    // print the series 
    for(int i = 0; i < n; i++) {
        printf("%d \n", f[i]);
    }
 }

int main(void) {
    int n;
    printf("Please input a positive number:\n");
    scanf("%d", &n);
    Fibonacci(n);
}