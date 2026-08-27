#include <stdio.h>

int main()
{
    int number,i=1,count;
    printf("enter your number :\n");
    scanf("%d",&number);
    while (i<=number)
    {
        if(number%i==0){
            count++;
        }
        i++;

    }
    if(count==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }

    return 0;
}
