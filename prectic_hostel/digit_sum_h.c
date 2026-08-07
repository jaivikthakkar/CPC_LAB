#include <stdio.h>

int main()
{
    int n,dig,sum=0;
    printf("enter your number :\n");
    scanf("%d",&n);
    while(n!=0){
        dig=n%10;
        n=n/10;
        sum=sum+dig;
    }
    printf("your digit sum is : %d",sum);
    return 0;
}



