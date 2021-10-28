#include <stdio.h>
main()
{
    int i,number[5];
    printf("Enter value of array elements : ");
    for(i=0;i<5;i++)
        scanf("%d",&number[i]);
    printf("Show the numbers in reverse order .\n ");
    for(i=4;i>=0;i--)
        printf("%5d",number[i]);
}
