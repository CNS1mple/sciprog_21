#include <stdio.h>
#include <math.h>
#define Pi 3.1415926535897
int main(void) {
    double a = 0.0;
    double b = Pi / 3;
    // N = 12
    double diff = (b - a) / 12;
    double sum_loop = a + b;
    double x = a;

    // calculate the estimate value of f(x)
    for(int i = 0; i < 12; i++) {
        x += diff;
        sum_loop += 2 * tan(x);
    }
    double res = sum_loop * (b - a) / (2 * 12);


    printf("the estimate value is %.10lf \n", res);
    printf("the actual result is %.10lf \n", log(2));

    // the difference between the estimite value and the actual value
    printf("the difference is %.10lf \n", fabs(res - log(2)));
     
    return 0;
}