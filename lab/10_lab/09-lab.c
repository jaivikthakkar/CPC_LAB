// what is armstrong number ?
//  --> an armstrong number of order n is a number
//  in which each digit when multiplied by itself
//  n number of times and finally added together,result the
//  same number
//  example: 371
//  3*3*3+7*7*7+1*1*1=27+343+1=371

#include <stdio.h>

int main()
{
    int n,digit,count=0,ver,i=0,mul=1,sum=0,final,n_digit;
    printf("enter your number : ");
    scanf("%d",&n);
    ver=n;
    final=n;      // variable for our original value
    // now we first count digit in number;
    while (n!=0)
    {
        digit=n%10;
        n=n/10;
        count++;
    }
    while (ver!=0)
    {
        n_digit=ver%10;
        i=0;
        mul=1;
        while (i<count)
        {
            mul=mul*n_digit;
            i++;
        }
        ver = ver / 10;
        sum = sum + mul;
    }
    if(sum==final){
        printf("your number is amstrong");
    }
    else{
        printf("nothing");
    }

    return 0;
}
