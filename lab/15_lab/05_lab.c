#include <stdio.h>

int main()
{
    int i;
    char stri[1000];
    printf("enter your string ");
    scanf("%s",stri);
    for (i = 0; stri[i]!='\0'; i++)
    {
        printf("%c",stri[i]);
        // ver=i;
    }
    printf("string lentgh is %d",i);
    return 0;
}
