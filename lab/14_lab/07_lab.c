#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    float array[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter your number : ");
        scanf("%f", &array[i]);
    }
    float sum = 0.0, ave,mul=1.0,i_sum=0.0,h_mean,g_mean,ver;
    for (int i = 0; i < n; i++)
    {
        sum = sum + array[i];
        mul=mul*array[i];
        i_sum=i_sum+(1/array[i]);
    }
    ave = sum / n;
    h_mean=i_sum/n;
    ver=1/n;
    g_mean=pow(mul,ver);
    printf("ave=%f and g_mean=%f and h_mean=%f",ave,g_mean,h_mean);

    return 0;
}
