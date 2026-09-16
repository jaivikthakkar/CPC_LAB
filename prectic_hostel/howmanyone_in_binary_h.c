#include <stdio.h>

int main()
{
    int n,ver,rem,count=0;
    printf("enter n : ");
    scanf("%d",&n);
    while (n!=0)
    {
       ver=n>>1;
       rem=n-ver*2;
       if (rem==1)
       {
        count++;
       }
       n=n/2;
    }
    printf("%d",count);
    return 0;
}
