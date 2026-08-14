#include <stdio.h>
//Write a program to calculate simple and compound interest for given principal, rate, and time.
int main()
{
    int p, r, t, si, c;
    printf("enter the principal, rate and time");
    scanf("%d %d %d", &p, &r, &t);
    si = (p * r * t) / 100;
    c = p * (1 + r / 100) * t;
    printf("simple interest is: %d\n", si);
    printf("compound interest is: %d\n", c);
    return 0;
}