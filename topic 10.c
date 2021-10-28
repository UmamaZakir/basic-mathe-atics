#include <stdio.h>
#include <math.h>
main()
{
    float a,area;
    printf("The length of arm(meter): ");
    scanf("%f",&a);
    area=(pow(a,2)*sqrt(3))/4;
    printf("Area of equilateral triangle =%0.2f sq-meter",area);
}
