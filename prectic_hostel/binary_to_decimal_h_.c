#include <stdio.h>
#include<math.h>

int main()

{
    int n,digit,weight=1,decimal=0;
    printf("enter your binariy number :\n");
    scanf("%d",n);
    while (n!=0)
    {
       digit=n%10;
       decimal=decimal+digit*weight;
       n=n/10;
       weight = weight*2;
    }

    return 0;
}
