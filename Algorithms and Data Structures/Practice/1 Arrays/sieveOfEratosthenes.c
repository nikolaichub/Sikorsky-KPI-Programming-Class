#include <stdio.h>

#define N 100

// sieve of Eratosthenes / outputs a range of the Prime Numbers
// Решето Эратосфена / выводит ряд простых чисел

int main() {

    int sieve[N] = {0}; // 20 elements

    for (int i = 2; i < N; ++i)
        for (int j = i + 1; j < N; ++j)
            if (j % i == 0)
                sieve[j] = 1;
        
    printf("\nIndexes: \n");
    for (int i = 0; i < N; ++i)
        printf("%3d ", i); // вывод индексов

    printf("\nIndexes of not a Prime Numbers: \n");
    for (int i = 0; i < N; ++i)
        printf("%3d ", sieve[i]);

    printf("\nPrime Numbers: \n");
    for (int i = 2; i < N; ++i)
        if (sieve[i] == 0)
            printf("%3d ", i);

    return 0;
}