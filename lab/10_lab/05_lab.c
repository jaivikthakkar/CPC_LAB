#include <stdio.h>

int main()
{
    int number, digit;
    printf("enter your number :\n");
    scanf("%d", &number);
    while (number != 0)
    {
        digit = number % 10;
        number = number / 10;
        printf("%d\n",digit);
    }
    return 0;
}
