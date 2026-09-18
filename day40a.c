//Q79: Perform diagonal traversal of a matrix.
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

    // Input matrix
    printf("Enter the matrix elements:\n");
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

    // Diagonal traversal
    for(int k = 0; k < r + c - 1; k++)
    {
        for(int i = 0; i < r; i++)
        {
            int j = k - i;

            if(j >= 0 && j < c)
            {
                printf("%d ", a[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}