// this is only use for 1 to n ntuarl only one missing number finder
// and it also must have contious 1 to n+1
// 1 2 3 4+ 6

#include <stdio.h>

int main()
{
    long int n,i=1,u_n,u_sum=0,a_sum,miss_n;
    printf("enter how may number n");
    scanf("%ld",&n);
    while (i<=n)
    {
        scanf("%ld",&u_n);
        u_sum=u_sum+u_n;
        i++;
        printf("u_n=%ld\n", u_n);
        printf("u_sum=%ld\n", u_sum);
    }
    n=n+1;
    a_sum=(n*(n+1))/2;
    printf("a_sum=%ld\n",a_sum);
    miss_n = a_sum - u_sum;
    printf("your missing number is %ld",miss_n);
    return 0;
}



