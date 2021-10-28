#include <stdio.h>
main()
{
    int i,n,number[n];
    printf("enter number of array size :");
    scanf("%d",&n);
    printf("now enter value of array elements: ");
    for(i=0;i<n;i++)
        scanf("%d",& number[i]);
    printf("Show the number in reverse order .\n");
    for(i=n-1;i>=0;i--)
        printf("%5d",number[i]);
}
