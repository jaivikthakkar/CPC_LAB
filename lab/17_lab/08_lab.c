#include <stdio.h>

int main()
{
    int n;
    printf("enter n :");
    scanf("%d",&n);
    int array_1[n][n],array_2[n][n],array_3[n][n],*ptr_1=&array_1[0][0],*ptr_2=&array_2[0][0],*ptr_3=&array_3[0][0];
    for (int i = 0; i < n*n; i++)
    {
            printf("number :");
            scanf("%d",ptr_1+i);

    }
    for (int i = 0; i < n*n; i++)
    {
            printf("number :");
            scanf("%d", ptr_2 + i);

    }
    for (int i = 0; i < n*n; i++)
    {
        *(ptr_3 + i) = *(ptr_1 + i) + *(ptr_2 + i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",array_3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
