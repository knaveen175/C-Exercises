/*
Assignment : 05
Topic : More on Operators in C Language
01 ||       Write a program to input a three digit number and display the sum of the digits.

*/
#include<stdio.h>
int main()
{
    int a,x,y;
    printf("Enter any three digit Number ");
    scanf("%d", &a);
    x=a%10, a/=10, y=a%10;
    printf("Sum of the digits = %d", x+y+(a/10));
    return 0;
}
