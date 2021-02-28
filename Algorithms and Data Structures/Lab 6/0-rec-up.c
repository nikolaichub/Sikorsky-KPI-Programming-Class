#include <stdio.h>

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
    double x, i, sum = 0;
    printf("x = ");
    scanf_s("%lf", &x);
    printf("i = ");
    scanf_s("%lf", &i);

    c_ln(x, i, &sum);
    printf("Calculated value of ln(%lf) = %lf\n\n", x, sum);

    printf("Test: \n");
    double tempSum = 0, start;
    for (int j = 1; j <= i; ++j)
    {
        if (j == 1)
        {
            start = (x - 1) / x;
            tempSum += start;
        }
        else {
            start = start * ((j - 1) * (x - 1) / (j * x));
            tempSum += start;
        }
        printf("value = %lf sum = %lf \n", start, tempSum);
    }
    printf_s("Sum of range equal: ( %f )\n", sum);

    return 0;
}