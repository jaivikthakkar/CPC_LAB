#include <stdio.h>

int main()
{
    char s[2000],s2[2000];
    int count = 0, flag = 0;
    printf("enter your string :");
    gets(s);
    char *ptr=s,*ptr_2=s2;
    for (int i = 0; *(ptr+i)!='\0';i++)
    {
        *(ptr_2+i)=*(ptr+i);
        *(ptr_2+i+1)='\0';
    }
    printf("%s",s2);
    return 0;
}
