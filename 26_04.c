/*
Assignment : 26
Topic : Recursion
04||       Write a recursive function to print octal of a given decimal number.

*/ 
#include<stdio.h>
int octal(int a)
{
    if (a==0)
        return 0;

    octal(a/8);
    printf("%d ",a % 8);
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a==0)
        printf("0");
    else
        octal(a);
    return 0;
}