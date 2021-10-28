#include <stdio.h>
main()
{
    int i,p,n,number[10];
    printf("Type ten numbers by terminal(Key board): ");
    for(i=0;i<10;i++)
        scanf("%d",&number[i]);
    p=0;
    n=0;
    for(i=0;i<10;i++)
        if(number[i]>=0)
            p=p+1;
        else
            n=n+1;
        printf("Total positive number=%d\n",p);
        printf("Total negative number=%d\n",n);
}
