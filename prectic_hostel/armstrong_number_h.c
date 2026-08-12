#include <stdio.h>

int main()
{
    int n, digit, count = 0, ver, i = 1, mul = 1, sum = 0, ver_2, ver_count;
    printf("enter your number :\n");
    scanf("%d",&n);
    ver=n;
    ver_2=n;
    while (n!=0)
    {
       digit=n%10;
       count=count+1;
       n=n/10;
    }
    ver_count=count;
    while (ver_count!=0)
    {
        mul=1;
        i=1;
        digit = ver % 10;
        ver=ver/10;
        while (i<=count)
        {
            mul=mul*digit;
            i++;
        }

        sum=sum+mul;
        ver_count--;

    }
    if (sum==ver_2)
    {
        printf("your number armstrong number");

    }
    else
    {
        printf("nothig");
    }
    return 0;
}
