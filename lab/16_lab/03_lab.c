#include <stdio.h>

int main()
{
    int array[5][2];
    for (int i = 0; i < 5; i++)
    {
        printf("enetr roll_number and marks\n");
        scanf("%d %d",&array[i][0],&array[i][1]);
    }
    printf("roll\tmarks\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%d\n", array[i][0], array[i][1]);
    }
    return 0;
}
