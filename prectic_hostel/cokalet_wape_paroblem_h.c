#include <stdio.h>

int main()
{
    int money,price,k,count,r_money,waver;
    // first how many colalet i get
    printf("enter how many ruppes you have : ");
    scanf("%d",&money);
    printf("enter how much price of cocaklet : ");
    scanf("%d",&price);
    printf("at wich number of waver at give one colaat : ");
    scanf("%d",&k);
    count = money / price;
    waver=count;

    for ( ;waver>k;)
    {
        count=count+waver/k;
        waver=waver%k + waver/k;
    }
    printf("%d",count);

    return 0;
}
