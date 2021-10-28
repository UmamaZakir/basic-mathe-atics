#include <stdio.h>
#include <conio.h>
main()
{
    int i;
    char word[50];
    printf("Write a word :");
    scanf("%s",word);
    for(i=0;i<50;i++)
        printf("%s\t",word);
    getch();
}
