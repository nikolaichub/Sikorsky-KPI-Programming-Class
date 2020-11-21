#include <stdio.h>
#include <math.h>

double fisrtWay(int n) {

    double totalSum = 0; // сумма всего выражения
    double denominator = 1; // знаменатель
    int counter = 0; // количество операций

    for (int i = 1; i <= n; i++) {

        double numerator = 1; // числитель

        // calculating numerator
        for ( int j = 1; j <= i; j++) {
            numerator *= (j + 1) * sin(j);
            counter += 4;
        }

        denominator = i * (i + 1);
        counter += 2;

        totalSum += numerator / denominator;
        counter += 3;

    }

    printf("\nNumber of mathematical operations: %d\n", counter);
    return totalSum;
}

int main() {

    int n;
    printf("Input n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Sorry, 'n' must be in a range of natural numbers\n");
        
    } else {
        double resultFirst = fisrtWay(n);
	    printf("Result for first way: %.7f \n", resultFirst);
    };

    return 0;
}
