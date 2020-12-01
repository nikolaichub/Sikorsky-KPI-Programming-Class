#include <stdio.h>

#define N 10

void print_array(int A[]) {
    for (int i = 0; i < N; ++i) {
        printf("%3d", A[i]);
    }
    printf("\n");
    
}

int main() {

    // coping A element to B

    int A[N] = {0};
    int B[N] = {0};

    for (int i = 0; i < N; ++i)
        A[i] = i * 10;

    print_array(A);

    // classic
    for (int i = 0; i < N; ++i)
        B[i] = A[i];
    print_array(B);

    // reversed
    for (int i = 0; i < N; ++i)
        B[i] = A[N - i - 1];
    print_array(B);
    

    
    
    return 0;
}