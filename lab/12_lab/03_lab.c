#include <stdio.h>

int main()
{
    int n, ver;
    printf("enter how many row you want : ");
    scanf("%d", &n);
    ver = n;
    for (int i = n; 1 <= i; i--)
    {
        for (int j = n; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
