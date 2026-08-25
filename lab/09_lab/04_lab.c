#include <stdio.h>

int main()
{
    int n,i=1,sum=1;
    printf("enter your n :\n");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum*i;
        i++;
    }
    printf("your factorial is %d",sum);
    return 0;
}
