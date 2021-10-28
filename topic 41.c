#include <stdio.h>
main()
{
    char ch=65;
    do{
        printf("%c ",ch);
        ch++;
    }
    while((ch>='A')&&(ch<='Z'));
}
