#include <stdio.h>
#include <conio.h>
int main(void)
{
    char ch;
    printf("Enter number from 0 to 9 : ");
    ch=getche();
    switch(ch){
    case '0':
        printf("\n Zero.");
        break;
    case '1':
        printf("\n One.");
        break;
    case '2':
        printf("\n Two.");
        break;
    case '3':
        printf("\n Three.");
        break;
    case '4':
        printf("\n Four.");
        break;
    case '5':
        printf("\n Five.");
        break;
    case '6':
        printf("\n Six.");
        break;
    case '7':
        printf("\n Seven.");
        break;
    case '8':
        printf("\n Eight.");
        break;
    case '9':
        printf("\n Nine.");
        break;
    default :
        printf("\n You did not enter number from 0 to 9.");
    }
    getch();
}
