#include <stdio.h>

int main()
{
    int n;
    printf("how may number you gave to as input : ");
    scanf("%d", &n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d", &arry[i]);
    }

    int maxnumber = arry[0];
    for (int i = 1; i < n; i++)
    {
        if (maxnumber <= arry[i])
        {
            maxnumber = arry[i];
        }
    }

    printf("%d", maxnumber);
    return 0;
}
