// 5 2 8 5 2 9 8 8
// output :
//  5
//  2
//  8
#include <stdio.h>

int main()
{
    int n, duplicate;
    printf("enter n : ");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)       // for take input array from user
    {
        printf("enter your number : ");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n-1; i++)       // we sherching first elemet
    {
        int count=0,c_count=0;
        for (int j = i+1 ; j < n ; j++)         //  we second element
        {
            if (array[i]==array[j])             // comper first and second
            {
                count++;
            }
        }
        for (int z = i - 1; z >= 0; z--)
        {
            if (array[i] == array[z])
            {
                break;
            }
        }
    }
    return 0;
}
