#include <stdio.h>

int main()
{
    int n,largest,sceond_largest;
    printf("enter how many number you want to give as input : ");
    scanf("%d", &n);
    int arry[n];

    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d", &arry[i]);
    }
    largest=arry[0];
    sceond_largest=arry[1];
    for (int i = 1; i < n; i++)
    {
        if (arry[i]>largest)
        {
            sceond_largest=largest;
            largest=arry[i];
        }
        else if( sceond_largest<arry[i]){
            sceond_largest=arry[i];
        }
    }
    printf("%d %d",largest,sceond_largest);
    return 0;
}
