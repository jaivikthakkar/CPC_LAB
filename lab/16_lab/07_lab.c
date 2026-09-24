#include <stdio.h>

int main()
{
    int m, n,sum_f=0,sum_b=0;
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
            if (i==j)
            {
                printf("%d",array[i][j]);
                sum_f=sum_f+array[i][j];
            }
            if (i+j==n-1)
            {
                sum_b=sum_b+array[i][j];
            }
        }
    }
    printf(" f_sum == %d and b_sum == %d ",sum_f,sum_b);
    return 0;
}
