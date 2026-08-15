#include <stdio.h>
int main()
{
    int a;
    printf("enter the value");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the entered number is even");
    }
    else
    {
        printf("the entered number is odd");
    }
    return 0;
}