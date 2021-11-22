#include <stdio.h>
#include <math.h>


double  degtorad(double arg) {
    double pi = 3.1415927;
    return( (pi * arg)/180.0 );
}

double array[13];

double fx(int N){
    double a = 0.0;
    double b = degtorad(60);
    double sum_loop = a + b;

    for(int i = 0; i < N; i++) {
        sum_loop += 2 * array[i];
    }

    double res = sum_loop * (b - a) / (2 * N);
    return res;
}

int main(void) {
    for(int i = 0; i <= 12; i++) {
        double deg = i * 5;
        double rad = degtorad(deg);
        array[i] = tan(rad);
    }

    double res = fx(12);
    printf("%lf", res);
}

