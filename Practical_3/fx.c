#include <stdio.h>
#include <math.h>
#define Pi 3.1415926535897
int main(void) {
    double a = 0.0;
    double b = Pi / 3;
    double diff = (b - a) / 12;
    double sum_loop = a + b;
    double x = a;

    for(int i = 0; i < 12; i++) {
        x += diff;
        sum_loop += 2 * tan(x);
    }

    double res = sum_loop * (b - a) / (2 * 12);
    printf("the loop sum is %f \n", res);
    printf("the actual result is %f \n", log(2));
    printf("the difference is %f \n", res - log(2));
     
    return 0;
}