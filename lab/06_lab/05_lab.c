#include <stdio.h>

int main()
{
    float cpc,science,math,wd,english,df,per;
    printf("enter your cpc marks:");
    scanf("%f",&cpc);
    printf("enter your science marks:");
    scanf("%f",&science);
    printf("enter your math marks:");
    scanf("%f",&math);
    printf("enter your wd marks:");
    scanf("%f",&wd);
    printf("enter your english marks:");
    scanf("%f",&english);
    printf("enter your df marks:");
    scanf("%f",&df);
    per=((cpc+science+math+wd+english+df)/600)*100;
    printf("%f",per);
    if(per>70){
        printf("your  distinction");
    }
    else if(per>=61 && per<=70){
        printf("your calss is first ");
    }
    else if(per>=46 && per<=60){
        printf("your class is second");
    }
    else if(per>=36 && per<=45){
        printf("your calss is pass");
    }
    else
    {
        printf("you fail");
    }

    return 0;
}
