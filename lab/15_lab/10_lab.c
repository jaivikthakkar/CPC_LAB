#include <stdio.h>

int main()
{
    int n,n_number,ver;
    printf("enter your number n : ");
    scanf("%d", &n);
    int array[n], count;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d", &array[i]);
    }
    printf("enter number : ");
    scanf("%d",&array[n]);
    n++;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                ver = array[i];
                array[i] = array[j];
                array[j] = ver;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
