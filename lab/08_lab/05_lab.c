#include <stdio.h>

int main()
{
    int i=1,n;
    while(i<=10){
        printf("enter your number \n");
        scanf("%d",&n);
        if(n%2==0){
            printf("your number is even\n");
        }
        else{
             printf("your number is odd");
        }
        i++;
    }
    return 0;


}
