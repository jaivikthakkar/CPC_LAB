#include <stdio.h>

int main()
{
    int sec,hour,min,rsec=0,fsec=0;
    printf("enter your second only:");
    scanf("%d",&sec);
    hour=sec/3600;
    rsec=sec-(hour*3600);
    min=rsec/60;
    fsec=rsec-(min *60);

    printf("%d\n",hour);
    printf("%d\n",min);
    printf("%d\n",fsec);
    return 0; 
}