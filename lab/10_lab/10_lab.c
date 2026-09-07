// LCM
// 12 and 18 || 12 = 12 24 36 48 || 18 = 18 36 54 72
// so lcm is 36 list comman 

#include <stdio.h>

int main()
{
    int num_1,num_2,i=2,mul_1,mul_2,lcm,factor=0,ver;

    printf("how many number youu wnat to LCM : ");
    scanf("%d%d",&num_1,&num_2);
    // printf("%d%d",num_1,num_2);

    while (i<=num_1*num_2)
    {
        if(i%num_1==0 && i%num_2==0){
            break;
        }
        i++;
    }
    printf("%d",i);
    return 0;
}
