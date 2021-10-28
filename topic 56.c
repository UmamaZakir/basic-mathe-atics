#include <stdio.h>
#include <conio.h>
#include <math.h>
main()
{
    int x,y;
    long z;
    printf("Enter the value of base(x): ");
    scanf("%d",&x);
    printf("Enter the value of power(y): ");
    scanf("%d",&y);
    z=pow(x,y);
    printf("The result of x to the power y is %d\n",z);
    getch();
}
