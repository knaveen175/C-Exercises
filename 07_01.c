/*
Assignment : 07
Topic : Decision Control Statements
01 ||       Write a program to check whether a given number is positive or non-positive.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number- ");
    scanf("%d",&a);
    if (a>0)
        printf("Positive");
    else
        printf("Non Positive");
    return 0;
}