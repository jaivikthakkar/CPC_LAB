#include <stdio.h>

int main()
{
    int n,i=1,sum=0;
    printf("enter your number :\n");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i*i;
        i++;
    }
    printf("your sum is : %d",sum);
    return 0;
}
