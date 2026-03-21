/*
Assignment : 20
Topic : switch case control
04||       Write a program to check whether a given character is vowel or consonent or some other special character, using switch case statement.

*/ 
#include<stdio.h>
int main()
{
    char x,y;
    printf("Enter a Character- ");
    scanf("%c",&x);
    if (x==65 || x == 69 || x== 73 || x== 79 || x== 85 || x== 97 || x == 101 || x== 105 || x == 111 || x== 117)
        y=1;
    else if (x>=66 && x<= 68 || x>=70 && x<= 72 || x>=74 && x<= 78 || x>=80 && x<= 84 || x>=86 && x<= 90 || x>=98 && x<= 100 || x>=102 && x<= 104 || x>=106 && x<= 110 || x>=112 && x<= 116 || x>=118 && x<= 122)
        y=2;
    else
        y=3;
    
    switch (y)
    {
    case 1:
        printf("Vowel");
        break;
    case 2:
        printf("Consonent");
        break;
    default:
        printf("Special Character");
    }
}