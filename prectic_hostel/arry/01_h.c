#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("how may number you wnat to sum : ");
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d",&arry[i]);
        sum = sum + arry[i];
    }
    printf("sum=%d",sum);
    return 0;
}
