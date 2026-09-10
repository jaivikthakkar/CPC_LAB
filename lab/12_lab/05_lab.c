#include <stdio.h>

int main()
{
    int n, ver,sum=0;
    printf("enter how many row you want : ");
    scanf("%d", &n);
    ver = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum=sum+j;
        }
    }
    printf("%d", sum);

    return 0;
}
