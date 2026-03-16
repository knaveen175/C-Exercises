/*
Assignment : 09
Topic : Decision Control Statements
03 ||       Write a program to check whether a given alphabet is in uppercase or lowercase.

*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character- ");
    scanf("%c",&a);
    if (a<='z' && a>='a')
        printf("Lowercase");
    else if (a<='Z' && a>='A')
        printf("Uppercase");
    return 0;
}