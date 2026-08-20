#include <stdio.h>

int main()
{
    int i=100;
    while(i<=200){
        if(i%7==0 && i%5!=0){
            printf("your number is %d",i);
        }
        i++;
    }
    return 0;
}
