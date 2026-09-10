#include <stdio.h>

int main()
{
    int n,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seve=0,eight=0,nine=0,digit;
    printf("enter your number : ");
    scanf("%d",&n);
    for (int i = 0;n!=0; i++)
    {
        digit=n%10;
        n=n/10;
        switch (digit)
        {
        case 0:
            zero++;
            break;
        case 1:
            one++;
            break;
        case 2:
            two++;
            break;
        case 3:
            three++;
            break;
        case 4:
            four++;
            break;
        case 5:
            five++;
            break;
        case 6:
            six++;
            break;
        case 7:
            seve++;
            break;
        case 8:
            eight++;
            break;
        case 9:
            nine++;
            break;
        default:
            break;
        }
    }
    printf("zero=%d\n",zero);
    printf("one=%d\n",one);
    printf("two=%d\n",two);
    printf("three=%d\n",three);
    printf("four=%d\n",four);
    printf("five=%d\n",five);
    printf("six=%d\n",six);
    printf("seven=%d\n",seve);
    printf("eight=%d\n",eight);
    printf("nine=%d\n",nine);
    return 0;
}
