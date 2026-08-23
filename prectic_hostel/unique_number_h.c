// You are given n integers.
// Every number appears exactly twice, except one number that appears only once.
// Find the number that appears once.

#include <stdio.h>

int main()
{
    int n,ver,xor=0,final;
    printf("how may number you gave as input");
    scanf("%d",&n);
    while (n!=0)
    {
        printf("enter your number :\n");
        scanf("%d",&ver);
        xor=ver^xor;
        n--;
    }
    printf("%d",xor);

    return 0;
}
