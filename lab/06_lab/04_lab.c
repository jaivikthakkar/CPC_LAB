#include <stdio.h>

int main()
{
    int n,reminder;
    printf("enter your number :\n");
    scanf("%d",&n);
    reminder=n%10;
    if(reminder%2==0){
        printf("last digit is even");
    }
    else
    {
        printf("last digit is odd");
    }

    return 0;
}
