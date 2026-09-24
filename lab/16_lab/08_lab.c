#include <stdio.h>

int main()
{
    int m, n,count=0;
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
            if (array[i][j]==0)
            {
                count++;
            }
        }
    }
    if (count>(m*n)/2)
    {
        printf("sparse matrix ");
    }
    else
    {
        printf(" not a sparse matrix ");
    }
    return 0;
}
