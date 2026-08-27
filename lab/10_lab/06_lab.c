// Perfect Number : A number’s factors sum(excluding a number itself) becomes equivalent to
//  number then the given number is perfect number

#include <stdio.h>

int main()
{
    int number,n, i = 1, factor_sum = 0;
    printf("enter your number :\n");
    scanf("%d", &number);
    n=number;
    while (i < number)
    {
        if (number % i == 0)
        {
            factor_sum = factor_sum + i;
        }
        i++;
    }
    if (factor_sum == n)
    {
        printf("your number is perfect");
    }
    else
    {
        printf("your number is not perfect");
    }

    return 0;
}
