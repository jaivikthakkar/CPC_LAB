// #include <stdio.h>

// int main()
// {
//     int n ;
//     printf("enter n :");
//     scanf("%d",&n);
//     int ver=1;
//     int var=n;
//     for (int i = 1; i <= n; i++)
//     {
//         for ( int j = 1; j < ver; j++)
//         {
//             printf(" ");
//         }
//         for (int j = 1 ; j <= var; j++)
//         {
//             printf("*");
//             var--;
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int ver = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= ver; k++)
        {
            printf("* ");
        }
        ver--;
        printf("\n");
    }

    return 0;
}
