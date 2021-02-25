#include <stdio.h>
#include <math.h>

double c_ln(double x, double i, double* sum) {
    double k = 0;
    printf("k = %lf sum = %lf i = %lf\n", k, *sum, i);
    if (i == 1) {
        return *sum = (x - 1) / x;
    }
    k = c_ln(x, i - 1, sum) * (i - 1) * (x - 1) / (i * x);
    *sum += k;
    printf("k = %lf sum = %lf i = %lf\n", k, *sum, i);
    return k;
}

int main() {
    double real, x, i, sum = 0;
    printf("x = ");
    scanf_s("%lf", &x);
    printf("i = ");
    scanf_s("%lf", &i);

    real = log(x);
    c_ln(x, i, &sum);
    printf("Calculated value of ln(%lf) = %lf\n", x, sum);
    printf("Real value of ln(%.1lf) = %lf", x, real);

    return 0;
}