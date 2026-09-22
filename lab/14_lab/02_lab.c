#include <stdio.h>

int main()
{
    int n,p_count=0,n_count=0;
    printf("enter n :");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]>0)
        {
            p_count++;
        }
        else if (array[i]<0){
            n_count++;
        }
    }
    printf("positive = %d and nagative = %d",p_count,n_count);
    return 0;
}
