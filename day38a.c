//Q75: Add two matrices.
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

    int a[r][c], b[r][c], sum[r][c];

    // Input first matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
            {
                printf("Invalid matrix value.\n");
                return 1;
            }
        }
    }

    // Input second matrix
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (scanf("%d", &b[i][j]) != 1)
            {
                printf("Invalid matrix value.\n");
                return 1;
            }
        }
    }

    // Add matrices
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}