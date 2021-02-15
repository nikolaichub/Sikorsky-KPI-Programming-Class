#include <stdio.h>

/*
    n! = n(n-1)!
    крайний случай: 
    0! = 1 
*/

int factorial(int n) {
    if (n == 0) return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorial(n));
    return 0;
}