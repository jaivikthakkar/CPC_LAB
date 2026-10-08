#include <stdio.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j = i + 1;
        for (;j < n; j++)
        {
            if (array[i]==array[j])
            {
               for (int z = j ; z < n; z++)
               {
                    array[z]=array[z+1];
               }
               n--;
               j--;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
    printf("%d",array[i]);
    }

    return 0;
}
