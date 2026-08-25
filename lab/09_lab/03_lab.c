#include <stdio.h>

int main()
{
    int x,y,i=1,multi=1;
    printf("enter your base:\n");
    scanf("%d",&x);
    printf("enter your power=\n");
    scanf("%d",&y);
    while (i<=y)
    {
        multi=multi*x;
        i++;
    }
    printf("your power is %d",multi);
    return 0;
}
