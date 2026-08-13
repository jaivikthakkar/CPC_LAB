#include <stdio.h>

int main()
{
    int a,b,i=0,n=0;
    printf("Enter your number :");
    scanf("%d %d",&a,&b);
    while(i<a){
        n=n+b;
        i++;
    }
    printf("%d",n);

    return 0;
}
