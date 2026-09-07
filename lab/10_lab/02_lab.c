#include <stdio.h>

int main()
{
    int number,sum=0,count=0,max,min;
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
        if (count==1)
        {
            min=number;
            max=number;
        }
        if (number>max)
        {
            max=number;
        }
        else
        {
            min=number;
        }
    }
    ave=sum/(float)count;
    printf("your sum is %d and \n your aveage is %f \n",sum,ave);
    printf("max= %d\n min=%d",max,min);

    return 0;
}
