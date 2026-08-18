#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("enter your number n1,n2 and n3 :");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        if(n2>n3){
            printf("sceond largest number is %d",n2);
      }
      else
      {
          printf("sceond largest number is %d", n3);
      }

    }
    else if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            printf("sceond largest number is %d", n1);
        }
        else
        {
            printf("sceond largest number is %d", n3);
        }
    }
    else if (n3 > n2 && n3 > n1)
    {
        if (n2 > n1)
        {
            printf("sceond largest number is %d", n2);
        }
        else
        {
            printf("sceond largest number is %d", n1);
        }
    }

    return 0;
}
