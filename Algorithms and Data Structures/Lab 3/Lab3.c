#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <windows.h>
#include <math.h>

#define COLUMN 80
#define ROW 25 //четное

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

    if (m % 2 != 0)
    {
        for (j = m / 2; j <= n - 1 - (m / 2); j++)
        {
            i = m / 2;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
    }

    for (p = m/2; p > 0; p--)
    {
        
        for (j = n-1-p; j >= p-1; j--)
        {
            i = m - p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        for (i = m-p; i >= p-1; i--)
        {
            j = p - 1;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        for (j = p-1; j <= n-p; j++)
        {
            i = p - 1;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        for (i = p-1; i < m-p+1; i++)
        {
            j = n - p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
    }

    gotoXY(0, m);
    return 0;
}
