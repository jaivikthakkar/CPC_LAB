#include <stdio.h>

int main()
{
    int n ;
    printf("enter n : ");
    scanf("%d",&n);
    float array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%f",&array[i]);
    }
    float max=array[0],sum=0.0,min=array[0];
    for (int i = 0; i < n; i++)
    {
        sum=sum+array[i];
        if (array[i]>max)
        {
            max=array[i];
        }
        if (array[i]<min)
        {
            min=array[i];
        }
    }
    printf("ave = %f and max = %f and min %f",sum/n,max,min);
    return 0;
}
