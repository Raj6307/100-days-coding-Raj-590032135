//Q73: Find the sum of each row of a matrix and store it in an array
#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    int a[r][c];
    int sum[r];

    for(int i = 0; i < r; i++)
    {
        sum[i] = 0;

        for(int j = 0; j < c; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
            {
                printf("Invalid matrix value.\n");
                return 1;
            }
            sum[i] = sum[i] + a[i][j];
        }
    }

    for(int i = 0; i < r; i++)
    {
        printf("%d%c", sum[i], i == r - 1 ? '\n' : ' ');
    }

    return 0;
}