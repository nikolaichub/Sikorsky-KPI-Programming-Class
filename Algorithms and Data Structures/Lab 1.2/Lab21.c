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

            // количество операций в (j + 1) * sin(j) равно 3.
            // закономерность количества операций умножения для
            // верхней границы суммы n > 1 возрастает на j - 1 раз.
            // В таком случае в этом цикле счетчик увеличивается
            // на 3 + j - 1. Отсюда следует, что counter += j + 2;

            counter += j + 2;
        }

        denominator = i * (i + 1);
        counter += 2;

        totalSum += numerator / denominator;
        counter += 1;

    }

    // к уже существующему счетчику еще необходимо
    // добавить количество операций прибавления для
    // формулы суммы. Закономерность этого n - 1
    // так как для n = 1 всего одно слагаемое

    counter += n - 1;
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
