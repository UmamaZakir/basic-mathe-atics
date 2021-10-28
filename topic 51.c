#include <stdio.h>
#define SIZE 12
main()
{
    int a[SIZE]={7,10,15,14,17,12,90,36,41,78,84,53};
    int i,total=0;
    for(i=0;i<=SIZE-1;i++)
        total+=a[i];
    printf("\n Total of array element values is %d\n",total);
}
