/*
Assignment : 07
Topic : Decision Control Statements
04 ||       Write a program to check whether a given number is an even number or an odd number without using % operator.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number- ");
    scanf("%d",&a);
    if ((a/2)*2==a)
        printf("Given Number is Even");
    else
        printf("Given Number is Odd");
    return 0;
}