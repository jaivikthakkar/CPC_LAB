#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    a > b ? printf("here a=%d is greter and %d ", a, a * c) : printf("here b=%d is greter and %d ", b, b * c);
    return 0;
}
