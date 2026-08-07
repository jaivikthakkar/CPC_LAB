// 1+4+9+16+.......n
#include <stdio.h>

int main()
{
    int n ,i=1, sum=0;
    printf("enter your number");
    scanf("%d",&n);
    while(i<=n){
        sum = sum +i*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}