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
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printMatrix(int i_cord, int j_cord) {
    gotoXY(j_cord, i_cord);
    printf("#");
}

int main() {

    int n = COLUMN; // columns
    int m = ROW; // rows
    int p; // amount of cycle in spiral

    int i, j;

    int matrix[ROW][COLUMN] = { 0 };

    // cycles
    for (p = 0; p < m/2; p++) 
    {
        // left
        for (j = n-1-p; j >= p; j--)
        {
            i = m - p - 1;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        // up
        for (i = m - 1 - p; i >= p; i--)
        {
            j = p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        // right
        for (j = p; j <= n-1-p; j++)
        {
            i = p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        // down
        for (i = p; i < m-1-p; i++)
        {
            j = n-1-p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
    }

    // for an odd number of cycles
    if (m % 2 != 0)
    {
        for (j = n - 1 - (m / 2) ; j >= m / 2; j--)
        {
            i = m / 2;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
    }

    gotoXY(0, m);
    return 0;
}
