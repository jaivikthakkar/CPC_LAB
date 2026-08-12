#include <stdio.h>


int main()
{
    int n,mul,div;
    printf("enter your number ");
    scanf("%d",&n);
    mul= n <<1;
    div= n >>1;
    printf("multi=%d\n",mul);
    printf("div=%d",div);
    return 0;
}
