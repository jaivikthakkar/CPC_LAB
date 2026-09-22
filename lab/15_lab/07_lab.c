#include <stdio.h>

int main()
{
    int n,ver;
    printf("enter n :");
    scanf("%d",&n);
    int array[n];
    int ver_n = n-1;
    for ( int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i <= n/2; i++)
    {
        ver=array[i];
        array[i]=array[ver_n];
        array[ver_n]=ver;
        ver_n--;
    }
    for ( int i = 0; i < n; i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
