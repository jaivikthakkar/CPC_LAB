#include <stdio.h>

int main()
{
    int m;
    printf("enter your month number");
    scanf("%d",&m);
    switch(m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("your day in month is 31");
           break;
        case 2:
            printf("your day in month is 28");
           break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("your day in month is 30");
            break;
        default:
            printf("invelid");


    }
    return 0;
}
