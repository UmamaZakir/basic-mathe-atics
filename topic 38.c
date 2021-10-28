#include <stdio.h>
int main()
{
    int s=0;
    int i=1;
    int n;
    printf("Enter the value of number: ");
    scanf("%d",&n);
    while(i<=n){
        s=s+i;
        i++;
    }
    printf("The sum of the value is %d\n",s);
}

