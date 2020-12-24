#include <stdio.h>
#define n 3

int main() {

    int A[2*n + 1] = {0, 1, 2, 3, 4, 5, 6};
    int B[n] = {0}, C[n] = {0};
    int L = A[0], R = A[2*n], M = (L + R) / 2; 

    // A[2*n + 1] devides to B[n], C[n]
    for (int i = 0; i <= 2*n; i++) {
        if (A[i] < M)
        {
            B[i] = A[i];
        }
        else if (A[i] > M)
        {
            C[i - n - 1] = A[i];
        }
    }

    // printing A[n]
    printf("A[n]: ");
    for (int i = 0; i < 2*n + 1; i++) {
        printf("%d ", A[i]);
    }

    // printing B[n]
    printf("\nB[n]: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    // printing C[n]
    printf("\nC[n]: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", C[i]);
    }

    // middle element of A
    printf("\nM: %d", M);
    
    return 0;
}