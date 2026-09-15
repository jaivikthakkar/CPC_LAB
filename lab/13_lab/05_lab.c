#include <stdio.h>

int main()
{
    int n,count=1;
    printf("enter n : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <= i; j++)
       {
        printf("%d ",count);
        count++;
       }
       printf("\n");
    }

    return 0;
}
