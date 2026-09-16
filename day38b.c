//Q76: Check if a matrix is symmetric.
#include <stdio.h>

int main()
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid matrix size.\n");
        return 1;
    }

    int a[n][n];
    int symmetric = 1;

    // Input matrix
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

    // Check symmetry
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                symmetric = 0;
                break;
            }
        }

        if(symmetric == 0)
            break;
    }

    if(symmetric == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}