#include <stdio.h>

// Write a program to calculate the area and perimeter of a rectangle
// given its length and breadth.

int main()
{
    int a, b, c, d;

    printf("Enter length and breadth: ");
    scanf("%d %d", &a, &b);

    c = a * b;
    d = 2 * (a + b);

    printf("Area of given rectangle is: %d\n", c);
    printf("Perimeter of given rectangle is: %d\n", d);

    return 0;
}