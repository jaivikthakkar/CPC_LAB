#include <stdio.h>

int main()
{
    int n,j;
    printf("enter your number n : ");
    scanf("%d", &n);
    int array[n], count;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j=i+1;
        while (j<n)
        {
            if (array[i] == array[j])
            {
                for (int z = j; z < n - 1; z++)
                {
                    array[z] = array[z + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}
