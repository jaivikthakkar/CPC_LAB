// this code for add two number without using + opreter.
// so we use inncrement and discrement



#include <stdio.h>

int main()
{
    int a,b;
    printf("enter your number a and b:");
    scanf("%d %d",&a,&b);
    // if b is positive
    if(b>0){
        while (b != 0) // we increment 'a' so that we must discrement 'b'
        {
            a++;
            b--;
        }
    }
    // if b is negative
    else if(b<0){
        while (b!=0) // here b is negative so we discrement 'a' and increment 'b'
        {
            a--;
            b++;
        }

    }
    printf("your number sum is %d",a);

    return 0;
}
