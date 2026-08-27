#include <stdio.h>

int main()
{
    int number,digit,reverse=0,new_digit;
    printf("enter your number :\n");
    scanf("%d",&number);
    while (number!=0)
    {
        digit=number%10;
        reverse=reverse*10+digit;
        number=number/10;

    }
    while (reverse!=0)
    {

        new_digit = reverse % 10;
        reverse=reverse/10;
        printf("%d\n",new_digit);
    }



    return 0;
}
