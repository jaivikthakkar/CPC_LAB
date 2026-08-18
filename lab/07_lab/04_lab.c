#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter a,b and c:");
    scanf("%d %d %d",&a,&b,&c);
    a>b && a>c ? printf("a=%d",a) : (b>a && b>c ? printf("b=%d",b):(c>a && c>b ? printf("c=%d",c) : printf("invelid")));
    return 0;
}





