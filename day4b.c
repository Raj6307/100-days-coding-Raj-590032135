#include <stdio.h>
//Write a program to find and display the sum of the first n natural numbers.
int main()
{
    int n, sum = 0;
    printf("enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("sum of first %d natural numbers is: %d", n, sum);
    return 0;
}