#include <stdio.h>

int main()
{
    char ch;
    printf("enter your character\n");
    scanf("%c",&ch);
    (ch>='A' && ch<= 'Z') || (ch>='a' && ch <= 'z' )? printf("your cherecter is alohabet") : printf("your cherecter is not alohabet");
     return 0;
}
