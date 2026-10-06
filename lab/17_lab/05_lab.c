#include <stdio.h>

int main()
{
    int i=0,n;
    printf("enetr n :");
    scanf("%d",&n);
    int array[n];
    int *ptr=array;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number : ");
        scanf("%d",ptr+i);
    }
    for ( i = 0; i < n; i++)
    {
       printf("%d\n",*(ptr+i));
    }
    return 0;
}
