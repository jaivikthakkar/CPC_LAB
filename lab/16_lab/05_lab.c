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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", array[j][i]);
        }
        printf("\n");
    }
    return 0;
}
