#include <stdio.h>
#include <conio.h>
main()
{
    int n,count=1;
    printf("Enter the total number of value: ");
    scanf("%d",&n);
     start:
        if(count>n)
            goto end;
        printf("%d ",count);
        ++count;
    goto start;
        end:
            putchar('\n');
    getch();
}
