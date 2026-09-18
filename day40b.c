//Q80: Multiply two matrices.
#include <stdio.h>

int main()
{
    int r1, c1, r2, c2;

    printf("Enter rows and columns for matrix A: ");
    if (scanf("%d %d", &r1, &c1) != 2 || r1 <= 0 || c1 <= 0)
    {
        printf("Invalid matrix A size.\n");
        return 1;
    }

    int a[r1][c1];

    printf("Enter matrix A elements:\n");
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
            {
                printf("Invalid matrix A value.\n");
                return 1;
            }
        }
    }

    printf("Enter rows and columns for matrix B: ");
    if (scanf("%d %d", &r2, &c2) != 2 || r2 <= 0 || c2 <= 0)
    {
        printf("Invalid matrix B size.\n");
        return 1;
    }

    if (c1 != r2)
    {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int b[r2][c2];
    int result[r1][c2];

    printf("Enter matrix B elements:\n");
    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            if (scanf("%d", &b[i][j]) != 1)
            {
                printf("Invalid matrix B value.\n");
                return 1;
            }
        }
    }

    // Matrix multiplication
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            result[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                result[i][j] = result[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    // Print result
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}