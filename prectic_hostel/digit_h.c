#include <stdio.h>

int main()
{
    int digit ,rem=0;
    printf("enter your digit");
    scanf("%d",&digit);
    while (digit!=0){
        rem = digit%10;
        digit= digit/10;
        printf("%d\n",rem);

    }
    return 0;
}