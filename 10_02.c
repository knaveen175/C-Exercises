/*
Assignment : 10
Topic : More on Decision Control Statements
02 ||       Write a program to check whether a given character is an alphabet(uppercase), an alphabet(Lowercase), a digit or a special character.

*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a character- ");
    scanf("%c",&a);
    if (a>='a' && a<= 'z')
        printf("Given Character is a Lowercase Alphabet");
    else if (a>='A' && a<= 'Z')
        printf("Given Character is a Uppercase Alphabet");   
    else if (a>='0' && a<= '9')
        printf("Given Character is a Digit");
    else
        printf("Given Character is a Special Character");  
    return 0;
}