#include <stdio.h>
#include <math.h>

double secondWay(int n) {

    double totalSum = 0; // сумма всего выражения
    double numerator = 1; // числитель
    double denominator = 1; // знаменатель
    int counter = 0; // количество операций

    for (int i = 1; i <= n; i++) {
        //counter += i;


        numerator *= (i + 1) * sin(i);
        counter += i + 2;

        denominator = i * (i + 1);
        counter += 2;

        totalSum += numerator / denominator;
        counter += 1;
    }
    
    counter += n - 1;
    printf("Number of mathematical operations: %d\n", counter);
    return totalSum;
}

int main() {

    int n;
    printf("Input n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Sorry, 'n' must be in a range of natural numbers");
        
    } else {
        double resultSecond = secondWay(n);
        printf("Result for second way: %.7f \n", resultSecond);
    };

    return 0;
}
