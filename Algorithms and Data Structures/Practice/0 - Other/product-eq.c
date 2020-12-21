#include <stdio.h>
#include <math.h>

#define N 5
int main() {

    double X[N] = {0};
    double x = 1.6;

    for (int i = 1; i < N; i++) {
        double P = 1.0; 
        for (int k = 1; k <= i; k++) {
            P *= cos(x/ pow(2, k));
        }
        X[i] = P;
    }

    for (int i = 0; i < N; i++) {
        printf("%f ", X[i]);
    }

    return 0;
}