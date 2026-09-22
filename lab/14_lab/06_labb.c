#include <stdio.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    float array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%f", &array[i]);
    }
    float sum = 0.0,ave;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }
    ave=sum/n;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>ave)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
