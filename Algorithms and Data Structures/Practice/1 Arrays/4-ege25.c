#include <stdio.h>
#include <iso646.h> // alternative spellings of common operators

#define N 5

void print_array(int A[]) {
    for (int i = 0; i < N; ++i) {
        printf("%3d ", A[i]);
    }
    printf("\n");
    
}

// program finds number greater that 100 and multiple by 5
// and then replaces those numbers with amout of matches

int main() {

    int A[N]; // only array to use
    int i, j, k; // only possible variables to use

    for (int i = 0; i < N; ++i)
        scanf("%d", &A[i]);

    k = 0; // k is for counter
    for (int i = 0; i < N; ++i)
        if ((A[i] > 100) && (A[i] %5 == 0))
            k++;

    for (int i = 0; i < N; ++i)
        if ((A[i] > 100) && (A[i] %5 == 0))
            A[i] = k;
    
    print_array(A);
    return 0;
}