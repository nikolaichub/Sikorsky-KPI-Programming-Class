#include <stdio.h>
#include <math.h>

float c_ln(float x, float i, float* sum) {
    float k = 0;
    printf("k = %f sum = %f i = %f\n", k, *sum, i);
    if (i == 1) {
        return *sum = (x - 1) / x;
    }
    k = c_ln(x, i - 1, sum) * (i - 1) * (x - 1) / (i * x);
    *sum += k;
    printf("k = %f sum = %f i = %f\n", k, *sum, i);
    return k;
}

int main() {
    float real, x, i, sum = 0;
    printf("x = ");
    scanf("%f", &x);
    printf("i = ");
    scanf("%f", &i);

    real = log(x);
    c_ln(x, i, &sum);
    printf("Calculated value of ln(%f) = %f\n", x, sum);
    printf("Real value of ln(%.1f) = %f", x, real);

    return 0;
}