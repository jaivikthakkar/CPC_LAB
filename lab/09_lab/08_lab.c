#include <stdio.h>


int main()
{
    int n,digit,revers=0,n_digit;
    printf("enter your number :\n");
    scanf("%d",&n);
    while (n!=0)
    {
        digit = n % 10;
        n = n / 10;
        revers = revers * 10 + digit;
    }
    while (revers!=0)
    {
        n_digit=revers%10;
        revers=revers/10;

        if(n_digit==0){
            printf("zero");
        }
        else if (n_digit == 1)
        {
            printf("one");
        }
        else if (n_digit == 2)
        {
            printf("two");
        }
        else if (n_digit == 3)
        {
            printf("three");
        }
        else if (n_digit == 4)
        {
            printf("four");
        }
        else if (n_digit == 5)
        {
            printf("five");
        }
        else if (n_digit == 6)
        {
            printf("six");
        }
        else if (n_digit == 7)
        {
            printf("seven");
        }
        else if (n_digit == 8)
        {
            printf("eight");
        }
        else if (n_digit == 9)
        {
            printf("nine");
        }

    }

    return 0;
}
