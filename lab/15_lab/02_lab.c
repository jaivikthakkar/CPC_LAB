#include <stdio.h>

int main()
{
    int n;
    printf("enter your number n : ");
    scanf("%d", &n);
    int array[n],count;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]<0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
