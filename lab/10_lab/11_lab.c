// HCF
// 12 and 18 || 12 = 1 2 3 4 6 12  || 18 = 1 2 3 6 9 18
// so HCF is most comman

#include <stdio.h>

int main()
{
    int num_1, num_2, i = 2,HCF;
    printf("how many number youu wnat to LCM : ");
    scanf("%d%d", &num_1, &num_2);
    while (i<=num_1)
    {
        if(num_1%i==0 && num_2%i==0){
            HCF=i;
        }
        i++;
    }
    printf("%d",HCF);
    return 0;
}
