#include <stdio.h>

int main()
{
    int n,tem;
    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n ; i++)
    {
        printf("enter your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]>array[j])
            {
                tem=array[i];
                array[i]=array[j];
                array[j]=tem;
            }
        }
    }
    int j=0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i+1; j < n; j++)
        {
        if (array[j] - array[i] != 1)
            {
                printf("%d", array[i] + 1);
                break;
            }
            else
            {

                break;
            }
        }
    }

    return 0;
}
