#include <stdio.h>
#include <stdlib.h>

int main()
{

    float y, x;

    printf("Enter a value of x: ");
    scanf("%f", &x);

    // x ( -21, 3] U (12, +∞);
    if (x > -21) {

        if (x <= 3) {
            // first equation
            y = -14 * x - 20;
            printf("Within the range of valid values\nEquasion result: %f \n", y);
        } else if (x > 12) {
            y = -14 * x - 20;
            printf("Within the range of valid values\nEquasion result: %f \n", y);
        } else {
            printf("No value\n");
        }
    }

    // x ( -∞, -41];
    else {
        if (x <= -41) {
            // second equation
            y = 13 * x * x / 11 - 6;
            printf("Within the range of valid values\nEquasion result: %f \n", y);
        } else {
            printf("No value\n");
        }
    }

    return 0;
}
