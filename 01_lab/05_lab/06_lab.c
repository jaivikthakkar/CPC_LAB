#include <stdio.h>

int main()
{
    char a;
    printf("enter your letter:\n");
    scanf("c",&a);
    if(a=='a'|| a=='e' || a=='i' || a=='o'||a=='u'){
        printf("your letter is vowel");
    }
    else
    {
        printf("your letter is consont");
    }

    return 0;
}
