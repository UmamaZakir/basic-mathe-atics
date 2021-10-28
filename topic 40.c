#include <stdio.h>
main()
{
    int n,counter=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do{
        printf("%d ",counter);
    }
    while(++counter<=n);
}
