#include <stdio.h>

int main()
{
    int decimal,binariy,reminder,num=0,place=1;
    printf("enter desimal velu:");
    scanf("%d",&decimal);
    int ver=decimal;
    while (decimal!=0)
    {
        reminder = decimal%2;
        decimal = decimal / 2;
        num = num + reminder*place;
        place = place * 10;

    }
    printf("%d", num);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n, binary = 0, place = 1, rem;

//     printf("Enter decimal number: ");
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         rem = n % 2;
//         binary = binary + rem * place;
//         place = place * 10;
//         n = n / 2;
//     }

//     printf("Binary = %d", binary);

//     return 0;
// }
