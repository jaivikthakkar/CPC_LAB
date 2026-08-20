#include <stdio.h>

int main()
{
    int a,b;
    printf("enter your number a and b:");
    scanf("%d%d",&a,&b);
    while(a<b){
        if(a%2==0){
            printf("%d",a);
        }
        a++;
    }
    return 0;
}
