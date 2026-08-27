#include <stdio.h>

int main()
{
    int number,sum=0,count=0;
    float ave;

    while (1)
    {
        printf("enter your number : \n");
        scanf("%d", &number);
        if(number==-1){
            break;
        }
        sum=sum+number;
        count++;
    }
    ave=sum/(float)count;
    printf("your sum is %d and your aveage is %f",sum,ave);

    return 0;
}
