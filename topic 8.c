#include <stdio.h>
#include <conio.h>
int main()
{
    float a,b,c;
    printf("Side1=");
    scanf("%f",&a);
    printf("Side2=");
    scanf("%f",&b);
    printf("Side3=");
    scanf("%f",&c);
    ((a||b||c)!=0 && (a+b)>c && (b+c)>a && (c+a)>b) ? printf("Triangle"): printf("Not a triangle");
    getch();
}
