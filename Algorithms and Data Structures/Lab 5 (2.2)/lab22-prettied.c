#include <stdio.h>
#include <windows.h>

#define N 7 // ROWS
#define M 9 // COLUMN

void print_patter(int A[][M]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void print_matrix(int A[][M]) {
    printf("Given matrix: \n\n");
    print_patter(A);
}

void print_sorted_matrix(int A[][M]) {
    printf("Sorted matrix: \n\n");
    print_patter(A);
}

int sort_column(int A[][M]) {
    int row;
    int col; 

    for (col = 0; col < M; col++) {
        int tmp, j, k;
        for (row = 0; row < N; row++) {
            // printf("%3d", A[row][col]);
            // printf("[%d][%d] ", row, col);
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
        // printf("\n");
    }
    // printf("\n");

    return 0;
}

int main() {

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
    print_matrix(A);

    // sort by insertion (left)
    sort_column(A);

    // prints sorted martix
    print_sorted_matrix(A);

    return 0;
}