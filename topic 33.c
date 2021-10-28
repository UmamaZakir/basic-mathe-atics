#include <stdio.h>
#include <conio.h>
main()
{
    int i,n,prod;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        prod=n*i;
        printf("%d * %d =%d\n",n,i,prod);
    }
    getch();
}
