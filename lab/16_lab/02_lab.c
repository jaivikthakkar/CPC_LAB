#include <stdio.h>

int main()
{
    int m, n,p_count=0,n_count=0,z_count=0;
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
            if (array[i][j]>0)
            {
                p_count++;
            }
            else if(array[i][j]<0)
            {
                n_count++;
            }
            else
            {
                    z_count++;
            }
        }

    }
    printf("p_count==%d n_count==%d z_count=%d",p_count,n_count,z_count);
    return 0;
}
