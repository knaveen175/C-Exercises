/*
Assignment : 08
Topic : Decision Control Statements
01 ||       Write a program to check whether a given number is a three digit number or not.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number- ");
    scanf("%d",&a);
    if (a>99 & a<1000 || a<-99 & a>-1000)
        printf("A three digit number");
    else 
        printf("Not a three digit number");
    
    
}