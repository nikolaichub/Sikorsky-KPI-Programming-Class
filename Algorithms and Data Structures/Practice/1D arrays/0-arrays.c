#include <stdio.h>

#define SIZE 10

// basic operations with arrays

int main() {



    int array1[SIZE] = {0};
    int array2[SIZE] = {0};
    int array3[SIZE] = {0};

    for (int i = 0; i < SIZE; ++i) array1[i] = i; // 0 1 2 3 4 5 6 7 8 9

    for (int i = 0; i < SIZE; ++i) array2[i] = SIZE - i - 1; // 9 8 7 6 5 4 3 2 1 0

    for (int i = 0; i < SIZE/2; ++i) {
        array3[2*i] = i;
        array3[2 * i + 1] = SIZE/2 + i; // 0 5 1 6 2 7 3 8 4 9
    };  

    for (int i = 0; i < SIZE; ++i) 
        printf("%d ", array2[i]); 

    return 0;
}
