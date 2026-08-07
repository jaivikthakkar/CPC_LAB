#include <stdio.h>

void main()
{
    int n,i=1,factorial=1;
    printf("enter your i ");
    scanf("%d",&n);
    while(i<=n){
        factorial=i*factorial;
        i++;
    }
    printf("%d",factorial);

}