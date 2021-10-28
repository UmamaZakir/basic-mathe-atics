#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three integer number : ");
    scanf("%d %d %d ", &num1,&num2,&num3);
    if((num1>num2) && (num1>num3))
        printf("\n %d is the largest number.",num1);

    else if((num2>num1) && (num2>num3))
        printf("\n %d is the largest number.",num2);

    else
        printf("\n %d is the largest number.",num3);

    getch();
}
