#include <stdio.h>

int main()
{
    int num,digit,sum=0,mul=1,i,ver;
    printf("enter your number :");
    scanf("%d",&num);
    ver=num;
    while (num!=0){
        digit=num%10;
        num=num/10;
        mul=1;
        for(int i=1;i<=digit;i++)
        {
            mul=mul*i;
        }
        sum=sum+mul;
    }
    if(sum==ver){
     printf("your number is strong");
    }
    else
    {
     printf("your number is not strong");
    }

    return 0;
}
