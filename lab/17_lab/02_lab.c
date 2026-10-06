#include <stdio.h>

int main()
{
    int a=5;
    double b = 6.0;
    float c=7.0;
    char d = 'a';
    int *ptr_a=&a;
    double *ptr_b=&b;
    float *ptr_c=&c;
    char *ptr_d=&d;
    printf("%d %d\n",ptr_a,*ptr_a);
    printf("%d %lf\n", ptr_b, *ptr_b);
    printf("%d %f\n", ptr_c, *ptr_c);
    printf("%d %c\n", ptr_d, *ptr_d);

    return 0;
}
