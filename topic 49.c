#include <stdio.h>
#define Max 25
int main()
{
    int fibo[Max],i;
    fibo [0]=1;
    fibo[1]=1;

    printf("\n First 25 consecutive fibonacci numbers are :\n ");
    for(i=2;i<=Max;i++){
        fibo[i]=fibo[i-2]+fibo[i-1];
    }
    for(i=0;i<Max;i++)
        printf("%10d",fibo[i]);
}
