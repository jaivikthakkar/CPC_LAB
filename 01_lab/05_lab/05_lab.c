#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter your three number a and b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("your gretest number is a=%d",a);
    }
    else if(b>a && b>c){
        printf("your gretest number is b=%d",b);
    }
    else{
        printf("your gretest number is c=%d",c);
    }

    return 0;
}
