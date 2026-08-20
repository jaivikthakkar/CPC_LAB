#include <stdio.h>

int main()
{
    int i=1,suqre,digit,sum=0,count=0;
    while(i<=10){
        suqre=i*i;
        digit=suqre%10;
        if(digit==3){
            sum=sum+suqre;
            count=count+1;
        }
        i++;
      }
      printf("your sum is %d \n avereg is %f",sum,sum/count);
    return 0;
}
