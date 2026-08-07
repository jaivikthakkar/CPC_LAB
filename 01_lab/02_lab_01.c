#include <stdio.h>

// int main()
// {
//     float hight,base, area;
//     printf("Enter your hight :\n");
//     scanf("%f\n",hight);
//     printf("Enter your Base :\n");
//     scanf("%f\n",base);
//     area=(hight*base)/2;
//     printf("Your area is = %f",area);

//     return 0;
// }




// int main()
// {
//     float principal,roi,time_period,interest=0.0;
//     printf("Enter your principal and roi anjnd timeperoid : \n");
//     scanf("%f %f %f\n",&principal,&roi,&time_period);
//     interest=(principal*roi*time_period)/100;
//     printf("Your interest is = %d",interest);
//     return 0;
// }



int main()
{
    float f,c=0.0;
    printf("enter your fernheit = \n");
    scanf("%f",&f);
    c =(((f-32)*5)/9);
    printf("your celsuis = %f",c);
    return 0;
}