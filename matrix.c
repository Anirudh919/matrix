#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void addmatrix()
{
}
void subtractmatrix()
{
}
void multiplicationmatrix()
{
}

int main()
{
    int n, i, j, b, a[10][10], m;
    printf("Enter the how many number of matrix insert:");
    scanf("%d", &n);
    for (b = 0; b < n; b++)
    {
        printf("Enter the order of matrix:");
        scanf("%d%d", &n, &m);
        printf("Enter the matrix %d:", b + 1);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[m][n]);
            }
        }
        printf("Matrix %d:\n", b + 1);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d\t", a[m][n]);
            }
            printf("\n");
        }
    }
}