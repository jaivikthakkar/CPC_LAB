#include <stdio.h>

int main()
{
    int i=1,n,sum=0;
    printf("enter n :");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);


    return 0;
}
