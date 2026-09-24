#include <stdio.h>

int main()
{
    int m, n;
    printf("enter m and n ");
    scanf("%d", &m);
    int array[m][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i<j)
            {
                array[i][j]=0;
            }
            else
            {
                 scanf("%d", &array[i][j]);
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}
