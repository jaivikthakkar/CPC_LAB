#include <stdio.h>

int main()
{
    int i,j;
    for(int i=0;i<4;i++);{
        for(int j=0;j<(3-i);j++){
            printf(" ");
            }
        for(int j=0;j<=i;j++){
                printf("*");
            }
        printf(" ");


    }
    return 0;
}
