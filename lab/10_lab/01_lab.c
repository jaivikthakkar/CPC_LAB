#include <stdio.h>

int main()
{
    int a,count=1,digit,last_digit;
    printf("enterr your number :\n");
    scanf("%d",&a);
    while (a!=0)
    {
        digit=a%10 ;
        if(count==1){
            last_digit=digit;
        }
        a=a/10;
        count++;
    }
    printf("your fist digit and last digit sum is %d",last_digit+digit);
    return 0;
}
