#include <stdio.h>

int main()
{
    int row,n;
    printf("enter your row number :");
    scanf("%d",&row);
    n=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
