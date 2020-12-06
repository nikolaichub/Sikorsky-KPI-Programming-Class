#include <stdio.h>

#define N 11

void print_array(int a[]) {
    for (int i = 0; i < N; ++i) {
        printf("%3d", a[i]);
    }
    printf("\n");
}

int search_element(int x, int a[]){
    int L = 0; // 0
    int R = N; // 10
    int mid;

    while (L < R) {
        mid = (L + R)/2;

        if (x == a[mid]) {
            printf("position of '%d' is %d", x, mid);
            break;
        } else if(x < a[mid]) {
            R = mid - 1;
        } else if(x > a[mid]) {
            L = mid + 1;
        }
    };
    
    return 0;
}


int main(){

    int arr[N] = {0, 1, 1, 1, 5, 5, 7, 8, 9, 10,11};
    int x = 11;

    print_array(arr);
    search_element(x, arr);

    return 0;
}