#include <stdio.h>

int main()
{
    int a = 0, b = 1, n, i = 1, next = 0;
    printf("enter your term number");
    scanf("%d", &n);
    while (i <= n)
    {
        next = a + b;
        a = b;
        b = next;
        i++;
    }
    printf("%d", b - a);
    return 0;
}
