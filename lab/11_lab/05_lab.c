#include <stdio.h>

int main()
{
    int n,sum=1;
    printf("enter your number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum=sum*i;
    }
    printf("%d",sum);
    return 0;
}
