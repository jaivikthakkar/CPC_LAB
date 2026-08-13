#include <stdio.h>

int main()
{
    int s,gs;
    printf("enter your salary:\n");
    scanf("%d",&s);
    if(s>=10000){
        gs=s+(s*20)/100+(s*80)/100;
    }
    else if(s>=2000)
    {
        gs = s + (s * 25) / 100 + (s * 90) / 100;
    }
    else
    {
        gs = s + (s * 30) / 100 + (s *95) / 100;
    }
    printf("your gross salary =%d",gs);


    return 0;
}
