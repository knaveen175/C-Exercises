/*
Assignment : 10
Topic : More on Decision Control Statements
01 ||       Write a program to check whether a given number is Positive, Negative or zero.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number- ");
    scanf("%d",&a);
    if (a>0)
        printf("Given Number is Positive");
    else if (a==0)
        printf("Zero is Neither Positive nor Negative");
    else
        printf("Given Number is Negative");  
    return 0;
}