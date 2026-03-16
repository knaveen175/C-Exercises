/*
Assignment : 08
Topic : Decision Control Statements
04 ||       Write a program to check whether a given year is a leap year or not.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter any Year- ");
    scanf("%d",&a);
    if (a%4)
        printf("Not a Leap Year");
    else
        printf("Leap Year");
    return 0;
}