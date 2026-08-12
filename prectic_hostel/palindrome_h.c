#include <stdio.h>

int main()
{
    int n,digit=0,sum=0,number=0,ver=0;
    printf("enter your number:\n");
    scanf("%d",&n);
    ver=n;
    while (n!=0)
    {
        digit = n % 10;
        number=number*10+digit;
        n=n/10;
    }
    if(number==ver){
        printf("your number is palindrome.");
    }
    else{
        printf("your number is not palindrome");
    }
    return 0;
}
