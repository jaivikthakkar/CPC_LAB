#include <stdio.h>

int main()
{
    int number, n;
    printf("enter number\n");
    scanf("%d", &number);
    printf("enter n :\n");
    scanf("%d", &n);
    for (int i;i <= n;i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }
    return 0;
}
