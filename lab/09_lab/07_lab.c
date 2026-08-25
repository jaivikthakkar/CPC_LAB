#include <stdio.h>

int main()
{
    int n;
    printf("enter your number \n");
    scanf("%d",&n);
    while (n>0)
    {
        if(n>=1000){
            n=n-1000;
            printf("M");
        }
        else if (n>=900 ){
            n=n-900;
            printf("CM");
        }
        else if (n >= 500 )
        {
            n = n - 500;
            printf("D");
        }
        else if (n >= 400)
        {
            n = n - 400;
            printf("CD");
        }
        else if (n >= 100)
        {
            n = n - 100;
            printf("C");
        }
        else if (n >= 90)
        {
            n = n - 90;
            printf("XC");
        }
        else if (n >= 50)
        {
            n = n - 50;
            printf("L");
        }
        else if (n >= 40)
        {
            n = n - 40;
            printf("XL");
        }
        else if (n >= 10)
        {
            n = n - 10;
            printf("X");
        }
        else if (n >= 9)
        {
            n = n - 9;
            printf("IX");
        }
        else if (n >=5)
        {
            n = n - 5;
            printf("V");
        }
        else if (n >= 4)
        {
            n = n - 4;
            printf("IV");
        }
        else if (n >= 1)
        {
            n = n - 1;
            printf("I");
        }
    }
    return 0;
}
