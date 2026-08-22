#include <stdio.h>

int main()
{
    int n,digit,reverse=0;
    printf("entert your number :");
    scanf("%d",&n);
    while(n!=0){
        digit=n%10;
        n=n/10;
        reverse=reverse*10+digit;
    }
    printf("your reverse number is =%d ",reverse);
    return 0;
}
