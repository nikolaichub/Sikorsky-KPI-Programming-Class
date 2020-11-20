#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <windows.h>
#include <math.h>

#define ROW 8
#define COLUMN 5

#define SLEEP_TIME 1

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

    int n = 80; // rows
    int m = 25; // columns
    int p; // amount of cycle in spiral

    int i, j;

    int matrix[ROW][COLUMN] = {0};
    for (p = 0; p < m / 2; p++)
    {
        for (j = p; j < n-p-1; j++)
        {
            if (j == -1) { j++; };
            i = p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
        
        for (i = p; i < m-p; i++)
        {
            j = n - p - 1;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        for (j = n-p-1; j >= p; j--)
        {
            i = m - p - 1;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }

        for (i = m - p - 1; i >= p+1; i--)
        {
            j = p;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
        
    }

    if (m %2 != 0)
    {
        for (j = m/2; j <= n-1-(m/2); j++)
        {
            i = m / 2;
            printMatrix(i, j);
            Sleep(SLEEP_TIME);
        }
    }

    gotoXY(0, m);
    return 0;
}
