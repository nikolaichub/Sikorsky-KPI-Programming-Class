#include <stdio.h>
#include <iso646.h> // alternative spellings of common operators

#define ROW 2 //
#define COLOMN 3 //

int input_array(int a[][COLOMN]){
    for (int i = 0; i < ROW; ++i)
    {
        for (int j = 0; j < COLOMN; ++j)
        {
           printf("%3d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    int a[ROW][COLOMN];
    int k = 1;

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLOMN; j++)
        {
            a[i][j] = k;
            k++;
        }
        
    }

    input_array(a);    
    return 0;
}