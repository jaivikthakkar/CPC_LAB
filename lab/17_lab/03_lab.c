#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int *ptr_1,*ptr_2;
    ptr_1=&a;
    ptr_2=&b;
    printf("%d",(*ptr_1)+(*ptr_2));
    return 0;
}
