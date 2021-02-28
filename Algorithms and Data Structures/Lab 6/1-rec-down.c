#include <stdio.h>
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
    double i, tempI = 1, sum = 0, start = (x - 1)/x;
    printf("i = ");
    scanf_s("%lf", &i);

    // double res = c_ln(start, i, tempI, sum);
    printf("Calculated value of ln(%lf) = %lf\n\n\n", x, c_ln(start, i, tempI, sum));
    printf("Test: \n");
    for (int j = 1; j <= i; ++j)
    {
        if (j == 1)
        {
            start = (x - 1) / x;
            sum += start;
        }
        else {
            start = start * ((j - 1) * (x - 1) / (j * x));
            sum += start;
        }
        printf("value = %lf sum = %lf \n", start, sum);
    }
    printf_s("Sum of range equal: ( %f )\n", sum);

    return 0;
}