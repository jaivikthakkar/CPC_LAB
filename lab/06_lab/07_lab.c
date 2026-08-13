#include <stdio.h>
#include<math.h>

int main()
{
     float d, a, b, c,ans_1,ans_2,root;
    printf("enter veriable a and b and c ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-4*a*c;
    root=sqrt(d);
    if(d>0){
        printf("your root  is natural");
        ans_1=(-b+(root))/2*a;
        ans_2=(-b-(root))/2*a;
        printf("your root 1st is %f and 2nd is %f",ans_1,ans_2);
    }
    else if(d==0){
        printf("your root  is natural");
        ans_1 = (root)/2 * a;
        printf("your root is %f",ans_1);
    }
    else{
        printf("your root is imaginarry");
    }

    return 0;
}
