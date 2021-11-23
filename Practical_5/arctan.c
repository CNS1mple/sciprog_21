#include <stdio.h>
#include <math.h>

double delta;
double array1[100005];
double array2[100005];

// Maclaurin series
double artanh1(double x) {

    double sum = 0.0;
    
    for(int i = 0;; i++) {
        double ele = pow(x, 1+2*i) / (2*i + 1);
        sum += ele;
        if(fabs(ele) <  delta) break;  // loop stops when elements is smaller than the precision.
    }
    return sum;

}

// natural logarithms
double artanh2(double x) {
   return 0.5*(log(1+x) - log(1-x));
}

int main(void) {
    printf("Please input precision: ");
    scanf("%lf", &delta);


    int len = 0;

    for(double i = -0.9; i <= 0.9; i+= 0.01) { // x ∈ [−0.9,0.9] and sampled every 0.01
        array1[len] = artanh1(i);
        array2[len] = artanh2(i);
        printf("The difference between tan[%.3lf] and tan[%.3lf] is %.10lf", i, i, fabs(array1[len] - array2[len]));
        printf("\n");
        len++;
        
    }
}