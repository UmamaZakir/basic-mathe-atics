#include <stdio.h>
main()
{
    float a,b,c;
    printf("Enter the base of the triangle: ");
    scanf("%f",&a);
    printf("Enter the height of the triangle: ");
    scanf("%f",&b);
    c=a*b/2;
    printf("Area of the triangle is %0.2f\n",c);
}
