#include <stdio.h>
main()
{
    int x;
    for(x=1;x<=10;x++){
        if(x==4)
            continue;
        printf("%d ",x);
    }
    printf("\nUsed continue to skip printing the value 4\n");
}
