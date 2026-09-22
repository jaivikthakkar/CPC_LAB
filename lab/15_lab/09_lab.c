#include <stdio.h>

int main()
{
    int n;
    printf("enter your number n : ");
    scanf("%d", &n);
    int array[n], count;
    for (int i = 0; i < n; i++)
    {
        printf("enetr your number :");
        scanf("%d", &array[i]);
    }
    int f_max= array[0],s_max=array[0];
    for (int i = 0; i < n; i++)
    {
            if (f_max<array[i])
            {
                s_max=f_max;
                f_max=array[i];
            }
            else if (s_max<array[i])
            {
                s_max=array[i];
            }
    }
    printf(" first max == %d second max == %d",f_max,s_max);
    return 0;
}
