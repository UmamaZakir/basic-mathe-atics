#include <stdio.h>
float v,t,d;
int main()
{
    printf("pls. insert velocity(v) in meter/second:");
    scanf("%f",&v);
    printf("Pls. insert time(t) in second:");
    scanf("%f",&t);
    d=v*t;
    printf("distance=%0.2f meter",d);
    return 0;
}

