#include <stdio.h>

int main()
{
    char s[2000], s2[2000];
    int count1 = 0,count2=0,flag=0;
    printf("enter your string :");
    gets(s);
    gets(s2);
    for (int i = 0; s[i] != '\0'; i++)
    {
        count1++;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        count2++;
    }
    if (count1==count2)
    {
        for (int i = 0; s[i]!='\0'; i++)
        {
            if (s[i]!=s2[i])
            {
                flag=1;
                break;
            }
        }
    }
    else
    {
        flag=1;
    }
    if (flag==1)
    {
        printf("not equal");
    }
    else
    {

        printf("equal");
    }
    return 0;
}
