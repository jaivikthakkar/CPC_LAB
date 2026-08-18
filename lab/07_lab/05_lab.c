#include <stdio.h>

int main()
{
    int n;
    printf("enter your number:\n");
    scanf("%d",&n);
    n%2==0 ? printf("your number is even") : printf("your number is odd");
    return 0;
}
