//Q74: Find the transpose of a matrix.
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
    int transpose[c][r];

    // Input matrix
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

    // Find transpose
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    // Print transpose
    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r; j++)
        {
            printf("%d%c", transpose[i][j], j == r - 1 ? '\n' : ' ');
        }
    }

    return 0;
}