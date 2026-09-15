#include <stdio.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int ver=n;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ver; j++)
        {
            printf("*");
        }
        printf("\n");
        ver--;
    }
    return 0;
}
