#include <stdio.h>
//Write a program to swap two numbers without using a third variable.
int main()
{
    int a, b;
    printf("enter your two values");
    scanf("%d %d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping the values are: %d %d", a, b);
    return 0;
}