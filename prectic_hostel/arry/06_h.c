#include <stdio.h>

int main()
{
    int n, target;
    printf("how many number you wnat to gaave as input : ");
    scanf("%d", &n);
    printf("enter your targeat number : ");
    scanf("%d", &target);
    int arry[n];
    int falg = 1,count=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d", &arry[i]);
        if (target == arry[i])
        {
            falg = 0;
            count++;
        }
    }
    if (falg == 1)
    {
        printf("not found");
    }
    else
    {
        printf("%d appersh %d times", target, count);
    }

    return 0;
}
