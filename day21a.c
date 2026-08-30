#include <stdio.h>

int main() 
{
    int n, first, last, digits = 0, divisor = 1, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    if (n < 10) {
        printf("Swapped number: %d\n", n);
        return 0;
    }

    while (n / divisor >= 10) {
        divisor *= 10;
    }

    first = n / divisor;
    last = n % 10;
    swapped = n - first * divisor - last + last * divisor + first;

    printf("Swapped number: %d\n", swapped);
    return 0;
}
