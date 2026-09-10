#include <stdio.h>

int main()
{
    int n,factor=1;
    float sum=1.0;
    printf("enter your number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        factor = factor * i;
        sum = sum + 1.0 / factor;
    }
    printf("%f",sum);
    return 0;
}
