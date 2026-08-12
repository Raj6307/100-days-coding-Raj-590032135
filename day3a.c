//Write a program to convert temperature from Celsius to Fahrenheit
#include <stdio.h>
    int main()
{
    int c,f;
    printf("enter temperature in celcius: ");
    scanf("%d",&c);
    f = (c * 9 / 5) + 32;
    printf("temperature in fahrenheit: %d\n",f);
    return 0;
}