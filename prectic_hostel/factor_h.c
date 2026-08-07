 #include <stdio.h>

 int main()
 {

    int n,i=1;
    printf("Enter your number:\n");
    scanf("%d",&n);
    while (i<=n)
    {
        if (n%i==0)
        {
            printf("factor is :%d\n",i);
        }
        i++;
    }

     return 0;
 }
