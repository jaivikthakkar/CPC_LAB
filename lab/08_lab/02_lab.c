#include <stdio.h>

// int main()
// {
//     int n,i=1;
//     printf("enter your number :");
//     scanf("%d",&n);
//     while (i<=n)
//     {
//         if(i%2!=0){
//             printf("%d",i);
//         }
//         i++;
//     }

//     return 0;
// }

int main(){
    int n,i=1;
    printf("enter your number");
    scanf("%d",&n);
    do{
        if(i%2!=0){
            printf("%d",i);
        }
        i++;
    }while(i<=n);
    return 0;
}
