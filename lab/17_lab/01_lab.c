#include <stdio.h>

int main()
{
    int a=5;
    int *ptr;
    ptr=&a;
    printf("address==%d and value==%d",ptr,*ptr);
    return 0;
}
