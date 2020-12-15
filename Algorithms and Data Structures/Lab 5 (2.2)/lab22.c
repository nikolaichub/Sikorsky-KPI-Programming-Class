#include <stdio.h>
#include <windows.h>

#define N 7 // ROWS
#define M 9 // COLUMN

int main() {

    // initial matrix
    int A[N][M] = {
        {1,  1,  8, 0,  0, 9,  3, 5, 1},
        {7,  1, -8, 0,  1, 8,  9, 7, 2},
        {9,  1,  8, 0,  0, 7,  0, 3, 3},
        {5,  2, -8, 0, -7, 6, -0, 0, 4},
        {2,  0,  8, 0, 11, 5, 10, 0, 5},
        {4,  0, -8, 0,  5, 4,  5, 0, 6},
        {-5, 4,  8, 0,  3, 3,  2, 1, 7},
    };

    // prints martix
    printf("Given matrix: \n\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // sort by insertion (left)
    int row;
    int col; 

    for (col = 0; col < M; col++) {
        int tmp, j, k;
        for (row = 0; row < N; row++) {
            tmp = A[row][col];
            j = 0;

            while (A[j][col] < tmp) {
                j = j + 1;
            };

            for (k = row - 1; k > j - 1; k--) {
                A[k + 1][col] = A[k][col];
            };

            A[j][col] = tmp;
        }
    }

    // prints sorted martix
    printf("Sorted matrix: \n\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}