#include <stdio.h>

int main()
{
    int i,j,n;
    printf(" hoe many you wnat");
    scanf("%d",&n);
    for (int i = 1;i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
