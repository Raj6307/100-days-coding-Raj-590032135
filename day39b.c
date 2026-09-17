//Q78: Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the matrix: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    int a[n][n];
    int sum = 0;

    // Input matrix
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if (scanf("%d", &a[i][j]) != 1)
            {
                printf("Invalid matrix value.\n");
                return 1;
            }
        }
    }

    // Sum of main diagonal
    for(int i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d\n", sum);

    return 0;
}