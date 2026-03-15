/*
Assignment : 04
Topic : Operators in C Language
08 ||       Write a program to swap values of two int variables in single line arithmetic expression.

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers  ");
    scanf("%d %d",&a,&b);
    a=a+b - (b=a);
    printf("%d %d", a,b);
    return 0;
}