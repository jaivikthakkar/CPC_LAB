#include <stdio.h>

int main()
{
    int n;
    printf("enter your number");
    scanf("%d",&n);
    if(n&1==1){
        printf("your number is odd");
    }
    else
    {
        printf("your number is even");
    }

    return 0;
}
