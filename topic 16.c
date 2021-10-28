#include <stdio.h>
int main()
{
    int age;
    printf("Please enter your age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible for voting");
    }
    else{
        printf("you are not eligible for voting");
    }
}
