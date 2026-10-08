#include <stdio.h>

int main()
{
    char s[2000],s2[2000];
    int count = 0,n;
    printf("enter your string :");
    gets(s);
    gets(s2);
    printf("enetr n ");
    scanf("%d",&n);

    for (int i = 0; s[i]!='\0'; i++)
    {
        count++;
    }
    for (int i = 0;s2[i]!='\0'; i++)
    {
        s[count+i]=s2[i];
        s[count+i+1]='\0';
    }
    printf("%s",s);
    return 0;
}
