#include <stdio.h>
//Write a program to calculate the area and circumference of a circle given its radius.
int main()
{
    int r,a,c;
    printf("enter the radius of the circle");
    scanf("%d", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("area of circle is: %d\n",a);
    printf("circumference of circle is: %d\n",c);
    return 0;
}