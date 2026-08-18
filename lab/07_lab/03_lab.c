#include <stdio.h>

int main()
{
    char ch;
    float n1,n2;
    printf(" enter your number n1 and n2\n");
    scanf("%f %f",&n1,&n2);
    printf("enter what you wnat to perforem +,-,/ and *");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
        printf("your sum is :%f",n1+n2);
        break;
    case '-':
        printf("your sub is :%f", n1 - n2);
        break;
    case '*':
        printf("your mul is :%f", n1 * n2);
        break;
    case '/':
        printf("your divaide is :%f", n1 /n2);
        break;
    default:
        break;
    }

    return 0;
}
