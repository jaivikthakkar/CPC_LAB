#include <stdio.h>

int main()
{
    // int x=5;
    // int *ptr;
    // ptr = &x;

    // int x=5,*ptr =&x;
    // *ptr=2;
    // printf("%d",*ptr);
    // int *ptr;
    // *ptr=1;
    // printf("%d",*ptr);
    // // return 0;
    // int x=5;
    // int *p;
    // int *q;
    // p = &x;
    // q=p;
    // int i=10,j=20,ver;
    // int *p,*q;
    // p=&i;
    // q=&j;
    // ver=*p;
    // *p=*q;
    // *q=ver;
    int x=5;
    int *p;
    int *q;
    p = &x;
    q=p;
    *q=1;
    printf("%d %d",*p,*q);
}
