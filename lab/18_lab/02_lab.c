#include <stdio.h>

int main()
{
    char s[2000];
    int count = 0, flag = 0;
    printf("enter your string :");
    gets(s);
    char *ptr=s;
    for (int i = 0; *ptr != '\0'; ptr++)
    {
        if (('a' <= *ptr && 'z' >= *ptr) || ('A' <= *ptr && 'Z' >= *ptr) || (0 <= *ptr && 9 >= *ptr))
        {
            printf("%c",*ptr);
        }
    }
    return 0;
}
