/*
Assignment : 07
Topic : Decision Control Statements
03 ||       Write a program to check whether a given number is Even number or an odd number.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number- ");
    scanf("%d",&a);
    if (a%2==0)
        printf("Given Number is Even");
    else
        printf("Given Number is Odd");
    return 0;
}