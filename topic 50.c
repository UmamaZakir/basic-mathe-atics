#include <stdio.h>
#define Size 10
main()
{
    int s[Size],j;
    for(j=0;j<=Size-1;j++)
        s[j]=2+2*j;
        printf("%s %13s\n","Element","Value");
    for(j=0;j<Size;j++)
        printf("%7d %15d\n",j,s[j]);
}
