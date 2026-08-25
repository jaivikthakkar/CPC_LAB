#include <stdio.h>

int main()
{
    int number,n,i=0;
    printf("enter number\n");
    scanf("%d",&number);
    printf("enter n :\n");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%d * %d = %d\n",number,i,number*i);
        i++;
    }

    return 0;
}
