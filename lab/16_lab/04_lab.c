#include <stdio.h>

int main()
{
    int m, n;
    printf("enter m and n ");
    scanf("%d", &m);
    scanf("%d", &n);
    int array[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter number : ");
            scanf("%d", &array[i][j]);
        }
    }
    int array_2[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("enter number : ");
            scanf("%d", &array_2[i][j]);
        }
    }
    int array_sum[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array_sum[i][j]=array[i][j]+array_2[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", array_sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
