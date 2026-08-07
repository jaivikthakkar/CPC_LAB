// Harshad Number : An integer divisible by the sum of its digits is said to be a Harshad number
#include <stdio.h>

int main()
{
   int n,sum=0,digit,ver;
   printf("enter your number : \n");
   scanf("%d",&n);
   ver=n;
   while(ver!=0){
    digit=ver%10;
    ver=ver/10;
    sum=sum+digit;
   }
   if (n % sum == 0)
   {
       printf("your number is harshd number");
   }
   else
   {
    printf("your number is not harshd");
   }


    return 0;
}
