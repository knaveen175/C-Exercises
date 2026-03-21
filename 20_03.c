/*
Assignment : 20
Topic : switch case control
03||       Write a program to check whether a given character is uppercase alphabet or lowercase alphabet or some other special character, using switch case statement.

*/ 
#include<stdio.h>
int main()
{
    char x,y;
    printf("Enter a character- ");
    scanf("%c",&x);
    if (x>65 && x<90)
        y=1;
    else if (x>97 && x<122)
        y=2;
    else if (x>48 && x<57)
        y=3;   
    
    switch (y)
    {
    case 1:
        printf("Uppercase Alphabet");
        break;
    case 2:
        printf("Lowercase Alphabet");
        break;
    case 3:
        printf("Digit");
        break;
    default:
        printf("Special Character");
        break;
    }
    return 0;
}
