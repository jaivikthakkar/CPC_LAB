#include <stdio.h>
int main()
{
    int n, flag = 1, best_frequency = 0, best_number;
    printf("enter your number n : ");
    scanf("%d", &n);
    int array[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        flag = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (array[i] == array[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            for (int k = i; k < n; k++)
            {
                if (array[i] == array[k])
                {
                    count++;
                }
            }
            if (best_frequency<count)
            {
                best_frequency=count;
                best_number=array[i];
            }
            while (best_frequency!=0)
            {
                count=0;
                for (int k = i; k < n; k++)
                {
                    if (array[i] == array[k])
                    {
                        count++;
                    }
                }
                if (best_frequency==count)
                {
                    printf("%d is repeted %d",array[i],count);
                }
                
                best_frequency--;
            }

        }
    }
    return 0;
}
