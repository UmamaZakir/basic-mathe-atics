#include <stdio.h>
int main()
{
    int mark;
    printf("Please enter your mark: ");
    scanf("%d",&mark);
    if(mark>=40){
        printf("You have passed in the subject .\n");
    }
    if(mark<40){
        printf("You have failed in the subject .\n");
    }
}
