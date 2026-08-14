#include <stdio.h>
//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
int main()
{
    printf("enter time in seconds: ");
    int s, h, m;
    scanf("%d", &s);
    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;
    printf("time in hours:minutes:seconds format is: %d:%d:%d\n", h, m, s);
    return 0;
}