#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
#include <time.h>
#include <windows.h>

#define ROW 25
#define COLUMN 80

#define SLEEP 20

// setting cursor position
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void printMatrix(int i, int j) {
    gotoXY(j,i);
}

int main() {

    int cur_x = 0;
    int cur_y = 0;

    int matrix[ROW][COLUMN] = {0};
    int fill = 0;

    // i - ряд
    for (int i = 0; i < ROW; i++)
    {
        // j - столб
        if (i %2 == 0)
        {
            for (int j = 0; j < COLUMN; j++)
            {
                matrix[i][j] = fill;
                printMatrix(i, j);
                printf("%d", matrix[i][j]);

                Sleep(SLEEP);
                
            }
        }
        else {
            for (int j = COLUMN - 1; j >= 0; j--)
            {
                matrix[i][j] = fill;
                printMatrix(i, j);
                printf("%d", matrix[i][j]);

                Sleep(SLEEP);
            }
        }
        
    }

    return 0;
}
