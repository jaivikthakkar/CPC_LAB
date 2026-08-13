#include <stdio.h>

int main()
{
    int a,b;
    printf("enter your number a and b:");
    scanf("%d %d",&a,&b);
    if(b>0){
        while (b != 0)
        {
            a++;
            b--;
        }
    }
    else if(b<0){
        while (b!=0)
        {
            a--;
            b++;
        }

    }
    printf("your number sum is %d",a);

    return 0;
}
