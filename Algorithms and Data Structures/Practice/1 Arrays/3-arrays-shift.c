#include <stdio.h>

#define N 10

void print_array(int A[]) {
    for (int i = 0; i < N; ++i) {
        printf("%3d", A[i]);
    }
    printf("\n");
    
}

int main() {

    int AL[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int AR[N] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    int tmp = 0;

    print_array(AL);

    // left shift by one
    // thats example is sort of stupid because 
    // its static and shift cant be set up
    tmp = AL[0];
    for (int i = 0; i < N - 1; ++i){
        AL[i] = AL[i+1];
    };
    AL[N-1] = tmp;
    print_array(AL);

    // right shift by one
    tmp = AR[N-1];
    for (int i = N-1; i > 0; --i){
        AR[i] = AR[i-1];
    };
    AR[0] = tmp;
    

    print_array(AR);
    return 0;
}