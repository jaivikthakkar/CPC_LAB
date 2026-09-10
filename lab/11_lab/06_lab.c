#include <stdio.h>

int main()
{
    int n,sum=0,a=0,b=1;
    printf("how may fibonaki tarem you want : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        printf("%d", b - a);
    }

    return 0;
}
