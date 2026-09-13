#include <stdio.h>

int main()
{
    int n,target;
    printf("how many number you wnat to gaave as input : ");
    scanf("%d",&n);
    printf("enter your targeat number : ");
    scanf("%d", &target);
    int arry[n];
    int falg=1;
    for (int i = 0; i < n; i++)
    {
       printf("enter your number : ");
       scanf("%d",&arry[i]);
       if (target==arry[i]){
        printf("found and index number is %d",i);
        falg=0;
        break;
       }
    }
    if (falg==1)
    {
        printf("not found");
    }
    return 0;
}
