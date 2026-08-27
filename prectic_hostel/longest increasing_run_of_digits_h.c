#include <stdio.h>

int main()
{
    int number,privious_digit,current_digit,current_count,upadate_count;
    printf("enter your number :\n");
    scanf("%d",&number);
    privious_digit=current_digit+1;
    upadate_count=current_count+1;
    while (number!=0)
    {
        current_digit = number % 10;
        number = number / 10;
        if(current_digit<privious_digit){
            current_count++;
        }
        if(upadate_count<current_count){
                upadate_count = current_count;
                current_count = 1;
            }
        privious_digit = current_digit;
    }
    printf("%d", upadate_count);

    return 0;
}
