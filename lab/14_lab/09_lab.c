#include <stdio.h>

int main()
{
    int n;
    printf("enter your n: ");
    scanf("%d",&n);
    int array[n],count=0;
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int j=i+1;
        while (j<n)
        {
            if (array[i]=array[j])
            {
                for (int z = j; z < n - 1; z++)
                {
                    array[z]=array[z+1];
                }
                n--;
                count++;
            }
            else
            {
                j++;
            }
        }
    }
    printf("%d",count);
    return 0;
}
