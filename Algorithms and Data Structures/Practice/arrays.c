#include <stdio.h>
#include <math.h>

#define SIZE 10

int main() {

    int array[SIZE] = {0};

    for (int i = 0; i <= SIZE/2; ++i) {
        array[2*i] = i;
        array[2 * i + 1] = SIZE/2 + i;
    };  

    for (int i = 0; i < SIZE; ++i) 
        printf(" %d ", array[i]);

    return 0;
}
