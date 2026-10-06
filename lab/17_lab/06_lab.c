#include <stdio.h>

int main()
{
    int i=0,n;
    printf("enetr n :");
    scanf("%d",&n);
    int array_1[n],array_2[n],*ptr=array_1,*ptr_2=array_2;
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d",ptr+i);
        *(ptr_2+i)=*(ptr+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(ptr_2+i));
    }
    return 0;
}
