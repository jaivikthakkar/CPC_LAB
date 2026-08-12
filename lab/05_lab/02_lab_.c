// #include <stdio.h>

// int main()
// {
//     int a,b,tem=0;
//     printf("enter a and b:\n");
//     scanf("%d %d",&a,&b);
//     tem=a;
//     a=b;
//     b=tem;
//     printf("your number swap using temporay verible is a=%d and b=%d",a,b);

//     return 0;
// }

#include <stdio.h>

int main()
{   int a,b;
    printf("enter your number a and b");
    scanf("%d %d",&a,&b);\
    a=a+b;
    b= a-b;
    a=a-b;
    printf("a=%d and b=%d",a,b);
    return 0;
}
