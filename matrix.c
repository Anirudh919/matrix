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
    int n, i, j, b, a[10][10], m, c;
    printf("Enter the how many number of matrix insert:");
    scanf("%d", &c);
    for (b = 0; b < c; b++)
    {
        printf("Enter the number of column & row of matrix:");
        scanf("%d%d", &m, &n);
        printf("Enter the matrix %d:", b + 1);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Matrix %d:\n", b + 1);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
    }
}