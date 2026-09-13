// [1 2 3 4 3 ==> output mMaximum occurs number = 3  and Occurs time =2]
#include <stdio.h>

int main()
{
    int n,i=0,j=1,count=1,max_number,max_count=1,number;
    printf("enter n :");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter you number : ");
        scanf("%d",&array[i]);
    }
    while (i<n-1)
    {
        count = 1;
        j=i+1;
        while (j<n)
        {
            if (array[i] == array[j])
            {
                count++;
                number=array[i];
            }
            j++;
        }
        if (max_count<count)
        {
            max_count=count;
            max_number=number;
        }
        i++;
    }
    if (max_count==1)
    {
        printf("your input number ocuurs only one time");
    }
    else
    {
        printf("number = %d and count = %d", max_number, max_count);
    }
    return 0;
}
