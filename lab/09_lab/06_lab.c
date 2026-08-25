// askivalue for uppercase is ' A'=65 to 'z'=90
// for lowercase is 'a'=96 to 'Z'=121

#include <stdio.h>

int main()
{
    char i='A',y='a';
    while (i<='Z')
    {
    printf("%c\n",i);
    i++;
    }
    while (y<='z')
    {
        printf("%c\n",y);
        y++;
    }



    return 0;
}
