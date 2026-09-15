#include <stdio.h>

int main()
{
    int n, count = 1;
    printf("enter n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            if (count==1)
            {
                count=0;
            }
            else
            {
                count=1;
            }
        }
        printf("\n");
    }

    return 0;
}
