#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <windows.h>
#include <math.h>

#define COLUMN 80
#define ROW 25

#define SLEEP_TIME 10

// setting cursor position
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = y;
    coord.Y = x;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {

    int n = COLUMN; // columns
    int m = ROW; // rows
    int p; // variable for number of cycles/loops in spiral

    int i, j;

    int matrix[ROW][COLUMN] = { 0 };

    // writes one more line for an odd number of cycles/loops
    if (m % 2 != 0) {

        for (j = m / 2; j <= n - 1 - (m / 2); j++) {

            i = m / 2;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }
    }

    // cycles
    // m/2 - number of cycles/loops
    for (p = m / 2; p > 0; p--) {

        // left
        for (j = n - 1 - p; j >= p - 1; j--) {

            i = m - p;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }

        // up
        for (i = m - p; i >= p - 1; i--) {

            j = p - 1;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }

        // right
        for (j = p - 1; j <= n - p; j++) {

            i = p - 1;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }

        // down
        for (i = p - 1; i < m - p + 1; i++) {

            j = n - p;
            gotoXY(i, j);
            printf("%d", matrix[i][j]);
            Sleep(SLEEP_TIME);
        }
    }

    // writes a gap
    gotoXY(m,0);
    return 0;
}
