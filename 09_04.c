/*
Assignment : 09
Topic : Decision Control Statements
04 ||       Write a program to check whether a given number is divisible by 3 and divisible by 2.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number- ");
    scanf("%d",&a);
    if(a%3==0 && a%2==0)
        printf("Divisible by 3 and 2");
    else
        printf("Not Divisible");
    return 0;
}