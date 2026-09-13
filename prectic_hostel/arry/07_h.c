#include <stdio.h>

int main()
{
    int n ;
    printf("enter how many number you want to give as input : ");
    scanf("%d",&n);
    // 1 2 3 4 5
    // 0 1 2 3 4
    // 5 4 3 2 1
    int ver =n-1;
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d",&arry[i]);
    }
    for (int i = 0,mid; i < ver; i++)
    {
        mid = arry[ver];
        arry[ver] = arry[i];
        arry[i] = mid;
        ver--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",arry[i]);
    }
    return 0;
}
