#include <stdio.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
       printf("%d\n",array[i]);
    }
    for (int i = n-1; i >=0; i--)
    {
        printf("%d",array[i]);
    }

    return 0;
}
