#include <stdio.h>
#include <math.h>

double c_ln(double x, double i) {
    double k = 0;
    printf("k = %lf i = %lf\n", k, i);
    if (i == 1) {
        k = (x - 1)/x;
    } else {
        k = c_ln(x, i - 1)*(i - 1)*(x - 1) / (i*x);
    }
    printf("k = %lf i = %lf\n", k, i);
    return k;
}

int main(){
    double x, real, i = 5;
    printf("x = ");
    scanf_s("%lf", &x);

    real = log(x);
    printf("Calculated value of ln(%.1lf) = %lf\n", x, c_ln(x, i));
    printf("Real value of ln(%.1lf) = %lf", x, real);

    return 0;
}