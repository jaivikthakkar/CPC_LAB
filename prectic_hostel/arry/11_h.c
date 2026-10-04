#include <stdio.h>

int main()
{
    int n, seen_before = 0, max_count = 0, count = 0,a=0;

    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    int arry_number[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        seen_before=0;
        for (int j = i-1; j >= 0 ; j--)
        {
            if (array[i]==array[j])
            {
                seen_before=1;
            }
        }
        if (seen_before)
        {
            continue;
        }
        count=0;
        for (int k= 0; k < n; k++)
        {
            if (array[i]==array[k])
            {
               count++;
            }
        }
        if (count>max_count)
        {
            a=0;
            max_count=count;
            arry_number[a]=array[i];
            a++;
        }
        else if (count == max_count)
        {
            arry_number[a] = array[i];
            a++;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d=%d\n",max_count,arry_number[i]);
    }
    return 0;
}
