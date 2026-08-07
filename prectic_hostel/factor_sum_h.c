#include <stdio.h>

int main()
{

    int n, i = 1,sum=0;
    printf("Enter your number:\n");
    scanf("%d", &n);
    while (i <= n)
    {
        if (n % i == 0)
        {
            sum=sum+i;
        }
        i++;

    }
    printf("%d", sum);

    return 0;
}
