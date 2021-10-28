#include <stdio.h>
int fact(long n);
main()
{
    long num,f;
    printf("Enter a number:");
    scanf("%ld",&num);
    f=fact(num);
    printf("The factorial is %ld",f);
}
int fact (long n)
{
if(n==0)
    return 1;
else
    return (n*fact(n-1));
}
