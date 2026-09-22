#include <stdio.h>

int main()
{
    int n ;
    printf("enter your number n : ");
    scanf("%d",&n);
    int array[n];
    int copy[n];
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        copy[i]=array[i];
        printf("%d ",copy[i]);
    }
    return 0;
}
