#include <stdio.h>

/*
    F<n> = F<n-1> + F<n-2>
    | F<0> = 0
    | F<1> = 1
    0 1 1 2 3 5 8 13 21 ...
*/

int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("Fib<%d> = %d\n", n, fib(n));
    return 0;
}