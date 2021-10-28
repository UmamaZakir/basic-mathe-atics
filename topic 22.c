#include <stdio.h>
#include <conio.h>
main()
{
    char ch;
    printf("Enter a letter : ");
    ch=getche();
    switch (ch){
    case 'a':
    case 'e':
    case 'i':
    case 'u':
        printf(" is a vowel");
        break;
        default:
        printf(" is a consonant");
    }
    getch();
}
