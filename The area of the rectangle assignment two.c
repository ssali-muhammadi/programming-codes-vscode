#include <stdio.h>

int main(void)
{
    double width=0;
    double heigth=0;
    double area=0;

    printf("enter width:");
    scanf("%lf", &width);

    printf("enter height:");
    scanf("%lf", &heigth);

     area = width*heigth;

    printf("The area of the rectangle is: %.2lf", area);

    return 0;

}

