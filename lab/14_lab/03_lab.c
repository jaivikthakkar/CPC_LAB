#include <stdio.h>

int main()
{
    int n, e_count = 0, o_count = 0;
    printf("enter n :");
    scanf("%d", &n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i]%2 == 0)
        {
            e_count++;
        }
        else
        {
            o_count++;
        }
    }
    printf("positive = %d and nagative = %d", e_count, o_count);
    return 0;
}
