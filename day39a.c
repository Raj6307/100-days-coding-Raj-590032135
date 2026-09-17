//Q77: Check if the elements on the diagonal of a matrix are distinct.
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
    int distinct = 1;

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

    // Check diagonal elements
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i][i] == a[j][j])
            {
                distinct = 0;
                break;
            }
        }

        if(distinct == 0)
            break;
    }

    if(distinct == 1)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}