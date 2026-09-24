#include <stdio.h>

int main()
{
    int m, n,mu,a,b,sum=0;
    printf("enter m and n ");
    scanf("%d", &m);


    int array[m][m],array_2[m][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter number : ");
            scanf("%d", &array[i][j]);
        }
    }
    printf("next m");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("enter number : ");
            scanf("%d", &array_2[i][j]);
        }
    }
    int mul[m][m];
    for (int i = 0; i < m ; i++)
    {
       for (int j = 0; j < m; j++)
       {
            mul[m][m]=0;
            for (int k = 0; k < m; k++)
            {
                mul[m][m]=mul[m][m]+array[i][k]+array_2[k][j];
            }
       }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
