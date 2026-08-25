#include <stdio.h>

int main()
{
    int n1,n2,i=1,sum=0;
    printf("enter n1:\n");
    scanf("%d",&n1);
    printf("enter n2:\n");
    scanf("%d",&n2);
    while (i<=n1)
    {
        sum=sum+n2;
        i++;
    }
    printf("your multiplation is ;%d",sum);

    return 0;
}
