#include <stdio.h>

int main()
{
    int n,ver;
    printf("enetr n : ");
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your numvber : ");
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i < n; i++)
    {
       for (int j = i+1; j < n; j++)
       {
        if (arry[i]>arry[j])
        {
            ver=arry[i];
            arry[i]=arry[j];
            arry[j]=ver;
        }
       }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arry[i]);
    }
    return 0;
}
