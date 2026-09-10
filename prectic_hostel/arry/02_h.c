#include <stdio.h>

int main()
{
    int n,count=0;
    printf("how may number you gave as input : ");
    scanf("%d",&n);
    int arry[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d",&arry[i]);
        if(arry[i]%2==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
