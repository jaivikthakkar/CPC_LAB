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
    int min = arry[0];
    int s_min=arry[0];
    for (int i = 1; i < n; i++)
    {
        if (arry[i] < min)
        {
            s_min=min;
            min = arry[i];
            continue;
        }

        if (arry[i] < s_min)
        {
            s_min = arry[i];
        }
    }

    printf("min==%d and second_min==%d", min, s_min);
    return 0;
}
