#include <stdio.h>
#include <math.h>

int main()
{
    float r, g, b, c, m, y, k, w;
    printf("enter your value for red:");
    scanf("%f", &r);
    printf("enter your value for green :");
    scanf("%f", &g);
    printf("enter your value for blue:");
    scanf("%f", &b);

    if (r > g && r > b)
    {
        w = r / 255;
    }
    else if (g > r && g > b)
    {
        w = g / 255;
    }
    else
    {
        w = b / 255;
    }
    printf("%f\n", w);

    c = (w - (r / 255)) / w;
    m = (w - (g / 255)) / w;
    y = (w - (g / 255)) / w;
    k = 1 - w;
    printf("cyan value =%f\nmagenta =%f\nyellow =%f\nblack value =%f\n", c, m, y, k);

    return 0;
}
