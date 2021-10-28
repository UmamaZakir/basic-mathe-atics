#include <stdio.h>
#include <conio.h>
main()
{
    int count=1;
    start:
        if(count>10)
            goto end;
        printf("%d",count);
        ++count;
    goto start;
        end:
            putchar('\n');
    getch();
}
