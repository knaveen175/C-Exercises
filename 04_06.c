/*
Assignment : 04
Topic : Operators in C Language
06 ||       Write a program to swap values of two int variables without using a third variable and without using +,- operators.

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers  ");
    scanf("%d %d",&a,&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d %d",a,b);
    return 0;
}