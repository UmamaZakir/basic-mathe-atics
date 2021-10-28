#include <stdio.h>
#include <conio.h>
main()
{
    float C,F;
    int choice;
    printf("1.Centigrade to Fahrenheit .\n");
    printf("2.Fahrenheit to Centigrade .\n ");
    printf("Enter choice : ");
    scanf("%d",&choice);
    if(choice==1){
        printf("Enter the value of Centigrade : ");
        scanf("%f",&C);
        F=9*C/5+32;
        printf("Value of Fahrenheit is %0.2f\n",F);
    }
    else{
        printf("Enter the value of Fahrenheit : ");
        scanf("%f",&F);
        C=(F-32)*5/9;
        printf("Value of Centigrade is %0.2f\n",C);
    }
    getch();
}
