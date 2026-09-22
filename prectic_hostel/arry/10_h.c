// 4 7 2 7 4 9 2 5
// 4 → repeated
// 7 → repeated
// 2 → repeated
// 9 → occurs once  ← first one
// 5 → occurs once, but comes later
// print===> 9
#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter  your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i]==array[j])
            {
                count++;
            }
            if (count>1)
            {
                continue;
            }
            if (count==5)
            {
                printf("%d",array[i]);
            }
        }
    }
    return 0;
}
