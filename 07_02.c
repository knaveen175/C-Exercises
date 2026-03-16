/*
Assignment : 07
Topic : Decision Control Statements
02 ||       Write a program to check whether a given number is divisible by 5 or not.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number- ");
    scanf("%d",&a);
    if (a%5==0)
        printf("Divisible by 5");
    else
        printf("Not Divisible");
    return 0;
}