//what is armstrong number ?
// --> an armstrong number of order n is a number
// in which each digit when multiplied by itself
// n number of times and finally added together,result the
// same number
// example: 371
// 3*3*3+7*7*7+1*1*1=27+343+1=371

#include <stdio.h>

int main()
{
    int n, digit, count = 0, ver, i = 1, mul = 1, sum = 0, ver_2, ver_count;
    printf("enter your number :\n");
    scanf("%d",&n); //take input number
    ver=n;       //we do that beacuse we need our oraginal value so we store in veriable
    ver_2=n;
    while (n!=0)  //we fist find how may digit in input number
    {
       digit=n%10;
       count=count+1;
       n=n/10;
    }
    ver_count=count; //we use count for 
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
