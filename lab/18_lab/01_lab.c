#include <stdio.h>
#include <string.h>

int main()
{

    char s[2000];
    int count=0,flag=0;
    printf("enter your string :");
    gets(s);
    for (int i = 0;s[i]!='\0'; i++)
    {
        count++;
    }
    for (int i = count; i>=0; i--)
    {
        if (s[i]!=s[count])
        {
           flag=1;
           break;
        }
        count--;
    }
    if (flag)
    {
        printf("string is  not palidrom");
    }
    else
    {
        printf("string is  palidrom");
    }
    return 0;
}
