#include <stdio.h>
main()
{
    int sum,i,n;
    printf("Enter the of n: ");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("The sum of the value is %d\n",sum);
}
