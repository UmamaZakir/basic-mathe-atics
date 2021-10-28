#include <stdio.h>
int main()
{
    int item,i,n,c;
    printf("Enter number of elements in array \n ");
    scanf("%d",&n);
    int array[n];
    printf("Enter %d integer(s)\n",n);
    for(c=0;i<n;i++)
        scanf("%d",&array[i]);
    printf("Enter a number to search\n");
    scanf("%d",&item);
    for(i=0;i<n;i++){
        if(array[i]==item){
            printf("%d is present at location .\n",item,c+1);
            break;
        }
    }
    if(i==n)
        printf("%d is not present in the array.\n",item);
    return 0;
}
