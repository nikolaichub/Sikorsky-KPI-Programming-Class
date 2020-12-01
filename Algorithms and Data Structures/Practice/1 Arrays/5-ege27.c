#include <stdio.h>
#include <iso646.h> // alternative spellings of common operators

#define N 4 // 4 numbers

void print_array(int A[]) {
    for (int i = 0; i < N; ++i) {
        printf("%3d ", A[i]);
    }
    printf("\n");
    
}

// program finds number pairs which multiplication can be divided by 26
// P.S. unfortunately its not an effective time and memory algorithm 

int main() {
    int a[N];
    int amt = 0; // amount of pairs

    for (int i = 0; i < N; ++i)
        scanf("%d", &a[i]);

    print_array(a);

    for (int i = 0; i < N; ++i)
        for (int j = i+1; j < N; ++j)
            if ((a[i] * a[j]) %26 == 0){
                printf("%d and %d satisfies the condition\n", a[i], a[j]);
                amt++;
            }
        
    printf("amount of pairs satisfings the condition %d \n", amt);
    return 0;
}