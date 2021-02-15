#include <stdio.h>

/*
    a^n = a*a^(n-1)
    крайний случай:
    a^0 = 1
*/

double power(double a, int n) {
    if (n == 0) return 1;
    return a*power(a, n-1);
}

int main(){
    int a, n;
    scanf("%d%d", &a, &n);
    printf("%d^%d = %lf\n", a, n, power(a, n));
    return 0;
}