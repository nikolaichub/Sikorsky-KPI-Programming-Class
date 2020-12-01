#include <stdio.h>

#define N 10

void print_array(int A[]) {
    for (int i = 0; i < N; ++i) {
        printf("%3d", A[i]);
    }
    printf("\n");
    
}

int main() {

    int A[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int tmp;

    print_array(A);

    // reversing A
    for (int i = 0; i < N/2; ++i){
        tmp = A[i];
        A[i] = A[N-1-i];
        A[N-1-i] = tmp;   
    };

    print_array(A); // 90 80 70 60 50 40 30 20 10  0
    return 0;
}