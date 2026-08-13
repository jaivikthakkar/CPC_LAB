#include <stdio.h>

int main()
{
    float unit,p=0.0,final_bill;
    printf("enter your unit");
    scanf("%f",unit);
    if(unit<=50){
        p=unit*0.5;
    }
    else if(unit>50 && unit<=150){
        p=50*0.5+(unit-50)*0.75;

    }
    else if(unit>150 && unit<=250){
        p=(50*0.5)+(100*0.75)+(unit-150)*1.2;
    }
    else{
        p = (50 * 0.5) + (100 * 0.75) + (100 * 1.2)+(unit-250)*1.5;
    }
    final_bill=p+(p*20)/100;
    printf("your electricity bill is:%f",final_bill);
    return 0;
}
