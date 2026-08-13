#include <stdio.h>

int main()
{
    char a;
    printf("enter your character:\n");
    scanf("%c",&a);
    if(a>='A' && a<='Z'){
        printf("your character is upper case");
    }
    else if(a>='a' && a<='z'){
        printf("your character is lower case");
    }
    else if(a>='0' && a<='9'){
        printf("your charecter is digit");
    }
    else{
        printf("your charecter is special character");
    }
    return 0;
}
