#include <stdio.h>

// проверка остатока от деления через отдельную функцию
// checking of remainder of the division via separate function

int moduloOf(int a, int b){
    return (a % b) == 0; // 1 - true or 0 - false
}

int main() {

    int a;
    printf("enter a: ");    
    scanf("%d", &a);

    int b;
    printf("enter b: ");    
    scanf("%d", &b);

    int result;
    result = moduloOf(a,b);

    printf("result: %d", result);

    return 0;
}