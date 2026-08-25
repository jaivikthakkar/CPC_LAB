#include <stdio.h>

int main()
{
    int number,i=1;
    printf("ennter your number :\n");
    scanf("%d",&number);
    while (i<=number)
    {
        if(number%i==0){
            printf("factor is : %d \n",i);
        }
        i++;
    }

    return 0;
}
