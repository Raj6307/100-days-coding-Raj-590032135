#include <stdio.h>
//program to find if the enetered year is leap year or not, Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
int main()
{
    int n;
    printf("enter the year: ");
    scanf("%d",&n);
    if(n%400==0)
    {
        printf("it is a leap year");
    }
    else if(n%100==0)
    {
        printf("it is not a leap year");
    }
    else if(n%4==0)
    {
        printf("it is a leap year");
    }
    else
    {
        printf("its is not a leap year");
    }
return 0;
}