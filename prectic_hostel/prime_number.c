#include <stdio.h>

int main()
{
    int n, i = 1, count = 0;
    printf("Enter your number  : \n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            count = count + 1;
        }
        i++;
    }
    if (count == 2)
    {
        printf("your number is prime");
    }
    else
    {
        printf("your number is not prime");
    }
    return 0;
}
