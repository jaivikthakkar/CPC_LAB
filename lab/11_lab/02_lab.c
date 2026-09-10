#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("enter your number");
    scanf("%d", &n);
    for (int i=1;i <= n;i++)
    {
        sum = sum + i;
        i++;
    }
    printf("your sum is %d", sum);
    return 0;
}
