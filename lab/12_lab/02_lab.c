#include <stdio.h>

int main()
{
    int n,ver;
    printf("enter how many row you want : ");
    scanf("%d",&n);
    ver=n;
    for (int i = 1; i<= n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}
