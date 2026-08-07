#include <stdio.h>

int main()
{
    int n1,n2;
    printf("Enter your number_1 and number_2\n");
    scanf("%d %d",&n1,&n2);
    while(n1<=n2){
        if(n1%2==0){
            printf("number is : %d\n",n1);
        }
        n1++;
    }

    return 0;
}
