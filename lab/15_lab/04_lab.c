#include <stdio.h>

int main()
{
    int n,target,flag=0,ver;
    printf("enter your number n : ");
    scanf("%d", &n);
    printf("enter your target : ");
    scanf("%d",&target);
    int array[n], count;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d", &array[i]);
        if (target == array[i])
        {
            flag = 1;
            ver=i;
        }
    }
    if (flag==1)
    {
        printf("found in index %d",ver);
    }
    else
    {
        printf("not found");
    }
    return 0;
}
