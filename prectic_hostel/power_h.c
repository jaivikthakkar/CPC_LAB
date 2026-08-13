#include <stdio.h>

int main()
{
    int x,y,i=1,mul=1;
    printf("Enter your x and y:");
    scanf("%d %d",&x,&y);
    while(i<=y);{
        mul=mul*x;
        i++;
    }
    printf("%d",mul);
    return 0;
}
