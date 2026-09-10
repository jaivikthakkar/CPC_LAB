#include <stdio.h>
#include<math.h>

int main()
{
    int n,last,first,place=1;
    printf("enter your number : ");
    scanf("%d",&n);
    last=n%10;
    for (int i = 0;n!=0;i++)
    {
        n=n/10;
        place=place*10;
    }
    first=n;
    


    return 0;
}
