#include <stdio.h>

int main()
{
    int n,digit=0,count=0,i=1,mul=1,sum=0;
    printf("enter your number :");
    scanf("%d",&n);
    while (n!=0)
    {
        digit=n%10;
        count=count+1;
        n=n/10;
        mul=1;
        i=1;
        while (i<=count)
        {
           mul=mul*digit;
           i++;
        }
        sum=sum+mul;
    }
    printf("%d",sum);

    return 0;
}
