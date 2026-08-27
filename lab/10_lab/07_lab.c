
#include <stdio.h>

    int main()
    {
        int number, i = 2,flag;
        printf("enter your number :\n");
        scanf("%d", &number);
        while (i <= number/2)
        {
            if (number % i == 0)
            {
                flag=1;
            }
            i++;
        }
        if (flag == 1)
        {
            printf(" not prime");
        }
        else
        {
            printf("prime");
        }

        return 0;
    }


