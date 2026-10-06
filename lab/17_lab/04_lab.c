#include <stdio.h>

int main()
{
    int a,b,ver;
    scanf("%d",&a);
    scanf("%d",&b);
    int *ptr_a=&a,*ptr_b=&b;
    ver=ptr_a;
    ptr_a=ptr_b;
    ptr_b=ver;
    printf("%d,%d",*ptr_a,*ptr_b);
    return 0;
}
