#include <stdio.h>
#include <conio.h>
main()
{
    int a;
    printf("Insert a number : ");
    scanf("%d",&a);
    if(a>0){
        printf("The number is positive .\n");
    }
    else if(a<0){
            printf("The number is negative .\n");
        }
    else{
        printf("It is zero .\n");
    }
    getch();
}
