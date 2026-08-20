#include <stdio.h>

int main()
{
    int n1,n2,i=1,quo=1,rem=1;

    printf("enter your number :\n");
    scanf("%d%d",&n1,&n2);
    while(i<=n2){
        quo = i * n1;
        if(n1*(i+1)>n2){
            break;
        }
        i++;
    }
    rem=n2-quo;
    printf("your  quotient  is %d and your reminder is %d",i,rem);
    return 0;
}
