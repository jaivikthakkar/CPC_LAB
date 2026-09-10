#include <stdio.h>

int main()
{
    int n;
    printf("how may number you gaive as input : ");
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d", &arry[i]);
    }
    int min,s_min;
    if (arry[0] < arry[1])
    {
        min = arry[0];
        s_min = arry[1];
    }
    else
    {
        min = arry[1];
        s_min = arry[0];
    }
    for (int i = 2; i < n; i++)
    {
        if (arry[i] < min)
        {
            s_min=min;
            min = arry[i];
        }

        else if (arry[i] < s_min)
        {
            s_min = arry[i];
        }
    }

    printf("min==%d and second_min==%d", min, s_min);
    return 0;
}
