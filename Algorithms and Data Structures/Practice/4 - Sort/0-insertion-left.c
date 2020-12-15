#include <stdio.h>

#define N 8

void print_array(int a[]) {
    printf("\n");
    for (int i = 0; i < N; ++i) {
        printf("%3d", a[i]);
    }
    printf("\n");
}

int main(){

    int arr[N] = {1, 7, 9, 5, 5, 4, 11, 3};
    int tmp, j, k;

    for (int i = 1; i < N; i++) {
        tmp = arr[i];
        j = 0;

        while (arr[j] < tmp) {
            j = j + 1;            
        }

        for (k = i - 1; k > j - 1; k--) {
            arr[k + 1] = arr[k];
        }

        arr[j] = tmp;
    }
    
    print_array(arr);

    return 0;
}