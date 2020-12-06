#include <stdio.h>

#define N 7 // ROWS
#define M 9 // COLUMN

void print_matrix(int A[][M]) {
    printf("Given matrix: \n\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int search_element_column(int A[][M]) {
    int j = 0; // index of column
    int L = 0; // start border
    int R = N; // end border
    int mid;

    while (L < R) {
        mid = (L + R)/2;

        if (A[mid][j] <= 5 && A[mid][j] >= 0) {
            printf("Fisrt Column: position of '%d' is A[%d][%d]\n", A[mid][j], mid, j);
            break;
        } else if(A[mid][j] > 5) {
            L = mid + 1;
        } else if(A[mid][j] < 0) {
            R = mid - 1;
        }
    };

    return 0;
}

int search_element_row(int A[][M]) {
    int i = N - 1; // index of row
    int L = 0; // start border
    int R = M; // end border
    int mid;

    while (L < R) {
        mid = (L + R)/2;

        if (A[i][mid] <= 5 && A[i][mid] >= 0) {
            printf("Last Row: position of '%d' is A[%d][%d]\n", A[i][mid], i, mid);
            break;
        } else if(A[i][mid] > 5) {
            L = mid + 1;
        } else if(A[i][mid] < 0) {
            R = mid - 1;
        }
    };

    return 0;
}

int main(){

    int A[N][M] = {
        {7, 0, 0, 0, 0, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 0, 0},
        {4, 4, 4, 3, 3, 2, 2, 1, 0},
    };

    // prints martix
    print_matrix(A);

    // binary search for the fisrt column
    search_element_column(A);

    // binary search for the last row
    search_element_row(A);

    return 0;
}