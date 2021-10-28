#include <stdio.h>
#include <conio.h>
int square(int);
int main()
{
    int x,n;
    printf("Enter total number(maximum 500)of value you want to square:");
    scanf("%d",&n);
    for(x=1;x<=n;x++)
        printf("%d ",square(x));
    printf("\n");
    getch();
    return 0;
}
//defining square function
int square(int y)
{
    return y*y;
}
