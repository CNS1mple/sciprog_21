#include <stdio.h>
#include <math.h>

// convert degrees to radians
double  degtorad(double arg) {
    double pi = 3.1415927;
    return( (pi * arg)/180.0 );
}

double array[13];

double fx(int N){
    double a = 0.0;
    double b = degtorad(60); // Pi / 3
    double sum_loop = a + b;


    for(int i = 0; i < N; i++) {
        sum_loop += 2 * array[i];
    }

    double res = sum_loop * (b - a) / (2 * N);
    return res;
}

int main(void) {
    for(int i = 0; i <= 12; i++) {
        // generate degree angles
        double deg = i * 5;
        // generate radian values
        double rad = degtorad(deg);
        // store tan(x) in an array
        array[i] = tan(rad);
    }

    // the area under the curve
    double res = fx(12);
    printf("The area under the curve of tan(x) from 0 - 60 degrees is %.10lf\n", res);
}

