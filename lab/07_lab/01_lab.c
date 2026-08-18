#include <stdio.h>

int main()
{
    int d;
    printf("enter your day number");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thushday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("sturady");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("invelid");

    }
    return 0;
}
