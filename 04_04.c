/*
Assignment : 04
Topic : Operators in C Language
04 ||       Write a program to swap values of two int variables.

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers  ");
    scanf("%d %d",&a,&b);
    c=a+b;
    b=c-b;
    a=c-a;
    printf("%d %d",a,b);
    return 0;
}