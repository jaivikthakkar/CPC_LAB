#include <stdio.h>

int main()
{
    float x,y,ver;
    printf("enter your number :\n");
    scanf("%f%f",&x,&y);
    printf("you wnat to sum that number then press 1\n you wnat to subtrct that number then press 2\n you wnat to multiplay that number then press 3\nyou wnat to divied then press 4\n");
    scanf("%f",&ver);
    if(ver==1){
        printf("your numbers sum is: %f",x+y);
    }
    else if(ver==2){
        printf("your number subtrcsen is :%f",x-y);
    }
    else if(ver==3){
        printf("your n umbers multiplay is:%f",x*y);
    }
    else if(ver==4)
    {
        printf("your number divistion is :%f",x/y);
    }

    return 0;
}
