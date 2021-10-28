#include <stdio.h>
#include<conio.h>
#define PI 3.14
main()
{
    float radius,area;
    printf("Enter radius of the circle : ");
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("The area of circle is %.2f",area);
    getch();
}
