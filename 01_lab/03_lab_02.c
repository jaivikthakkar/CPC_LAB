#include <stdio.h>

int main()
{
    int day, year = 0, rday= 0,month=0,fday=0;
    printf("enter your day only:");
    scanf("%d", &day);
    year = day/365;
    rday = day - (year*365);
    month = rday / 30;
    fday= rday - (month * 30);

    printf("%d\n", year);
    printf("%d\n", month);
    printf("%d\n", fday);
    return 0;

}
