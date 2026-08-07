//  Perfect Number : A number’s factors sum (excluding a number itself) becomes equivalent to
//  number then the given number is perfect number
#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("Enter your number: \n");
    scanf("%d",&n);
    while (i<n)
    {
        if (n%i==0)
        {
            sum=sum+i;
        }
        i++;
    }
    if (sum==n)
    {
       printf("your number is prime");
    }
    else
    {
        printf("your number is not prime");
    }


    return 0;
}
