#include <stdio.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int ver = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= ver; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        ver--;
    }
    return 0;
}
