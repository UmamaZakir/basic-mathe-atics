#include <stdio.h>
#define Max 5
main()
{
    int i,Roll[Max];
    float Mark[Max];
    for(i=0;i<Max;i++){
        printf("\n Enter Roll[%d] & Mark[%d]:",i,i);
        scanf("%d %f",&Roll[i],&Mark[i]);
    }
    for(i=0;i<Max;i++){
        printf("\n Roll[%d]=%d  Mark[%d]=%.2f",i,Roll[i],i,Mark[i]);
    }
}
