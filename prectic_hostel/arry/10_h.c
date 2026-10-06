// 4 7 2 7 4 9 2 5
// 4 → first time
// 7 → first time
// 2 → first time
// 9 → first time
//  7 → already appeared ← FIRST REPEATED
#include <stdio.h>

    int main()
{
    int n,count=0,j=0,flage;
    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter  your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        j = i-1, count = 0,flage=0;
        for (; j >=0; j--)
        {
            if (array[i]==array[j])
            {
                flage=1;
            }
        }
        if (flage)
        {
            printf("%d",array[i]);
            break;
        }
    }

    return 0;
}
