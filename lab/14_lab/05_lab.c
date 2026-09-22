#include <stdio.h>

int main()
{
    int h[5];
    int w[5];
    for (int i = 0; i < 5; i++)
    {
        printf("ewnetr h : ");
        scanf("%d",h[i]);
        printf("ewnetr w: ");
        scanf("%d", w[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (h[i]>170 && w[i]<50)
        {
            printf("h=%d",h[i]);
        }

    }
    return 0;
}
