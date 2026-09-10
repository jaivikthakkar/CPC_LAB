#include <stdio.h>

int main()
{
    int x,y,sum=1;
    printf("enter your base and power : ");
    scanf("%d %d",&x,&y);
    for (int i = 0; i < y; i++)
    {
       sum=sum*x;
    }
    printf("x^y is %d",sum);

    return 0;
}
