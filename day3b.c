#include <stdio.h>
//Q6: Write a program to swap two numbers using a third variable.
int main()
{
    int a, b, temp;
    printf("enter the two values");
    scanf("%d %d", &a ,&b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping the values are: %d %d", a, b);
    return 0;
}