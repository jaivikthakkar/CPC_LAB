#include <stdio.h>
#include <math.h>
int main()
{
    int i=0;
    float squ;
    while(i<=9){
        squ=sqrt(i);
        printf("your number is %d and it's squr root is %f \n",i,squ);
        i++;
    }

    return 0;
}
