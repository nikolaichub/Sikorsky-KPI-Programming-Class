#include <stdio.h>
#include <math.h>
#define x 2.0

double c_ln(double prev, double i, double tempI, double sum) {
    double res = 0.0;
    tempI = tempI + 1;
    if (tempI == i + 1) {
        sum += prev;
        res = sum;
        printf("prev = %lf tempI = %lf sum = %lf res = %lf\n", prev, tempI, sum, res);
        return res;
    }
    sum += prev;
    prev = prev * ((tempI - 1) * (x - 1) / (tempI * x));
    printf("prev = %lf tempI = %lf sum = %lf res = %lf\n", prev, tempI, sum, res);
    return c_ln(prev, i, tempI, sum);
}

int main() {
    double real, i, tempI = 1, sum = 0, start = (x - 1)/x;
    printf("i = ");
    scanf_s("%lf", &i);

    real = log(x);
    // double res = c_ln(start, i, tempI, sum);
    printf("Calculated value of ln(%lf) = %lf\n", x, c_ln(start, i, tempI, sum));
    printf("Real value of ln(%.1lf) = %lf", x, real);

    return 0;
}