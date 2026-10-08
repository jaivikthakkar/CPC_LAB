#include <stdio.h>

int main()
{
    char s[2000];
    int count = 0;
    printf("enter your string :");
    gets(s);
    for (int i = 0; s[i] !='\0'; i++)
    {
        count++;
    }
    return 0;
}
