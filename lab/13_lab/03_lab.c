#include <stdio.h>

int main()
{
    int n ;
    printf("enter n : ");
    scanf("%d",&n);
    int ver=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= ver; j++)
        {
           printf(" ");
        }
        ver--;
        for (int k = 1; k <= i ; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
