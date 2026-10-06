#include <stdio.h>

int main()
{
    int i = 0, n,ver;
    printf("enetr n :");
    scanf("%d", &n);
    int array_1[n], array_2[n], *ptr = array_1, *ptr_2 = array_2;
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d", ptr + i);

    }
    for (int i = 0; i < n; i++)
    {
        printf("enter number : ");
        scanf("%d", ptr_2 + i);
    }
    for (int i = 0; i < n; i++)
    {
        ver=*(ptr+i);
        *(ptr+i)=*(ptr_2+i);
        *(ptr_2+i)=ver;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));

    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr_2 + i));
    }
    return 0;
}
