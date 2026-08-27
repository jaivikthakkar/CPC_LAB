// palidrom number
// ex. 121 then reverse also 121 it is same as original number so that number is palidrom number
#include <stdio.h>

int main()
{
    int number, digit, reverse = 0, new_digit,ver;
    printf("enter your number :\n");
    scanf("%d", &number);
    ver=number;
    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    if(ver == reverse){
        printf("number is paligrom");
    }
    else{
        printf("number is not paligrom");
    }

    return 0;
}
