#include <stdio.h>

int main()
{
    float a,b,c;
    printf("Entrer your side of tringle a,b and c :");
    scanf("%f %f %f",&a,&b,&c);
    if(a==b==c){
        printf("your tringel is equilater");
    }
    else if(a==b || b==c || a==c ){
        printf("your tringel is isosceles");
    }
    else if(a!=b!=c){
        if((a*a)+(b*b)==c*c){
            printf("your tringel is right-angled triangle");
        }
        else
        {
            printf("your tringel is scaleme");
        }


    }
    return 0;
}
