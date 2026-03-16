/*
Assignment : 09
Topic : Decision Control Statements
05 ||       Write a program to check whether a given number is divisible by 7 or divisible by 3.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number- ");
    scanf("%d",&a);
    if(a%3==0 || a%7==0)
        printf("Divisible");
    else
        printf("Not Divisible");
    return 0;
}