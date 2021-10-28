#include <stdio.h>
#include <math.h>
float a,b,area;
main()
{
    printf("The length of equal arms (meter): ");
    scanf("%f",&a);
    printf("The length of other arm (meter): ");
    scanf("%f",&b);
    area=b*sqrt(a*a-b*b)/4;
    printf("the area of isosceles triangle = %0.2f sq-meter",area);
}
