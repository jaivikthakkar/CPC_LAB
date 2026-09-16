#include <stdio.h>

int main()
{
    int n,ver,rem,count=0;
    printf("enter n : ");
    scanf("%d",&n);
    for (int i = 1; i <=32; i++)
    {
        if (n&1)
        {
            count++;
        }
        n=n>>1;
    }
    printf("%d",count);
    return 0;
}
