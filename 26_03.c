/*
Assignment : 26
Topic : Recursion
03||       Write a recursive function to print binary of a given decimal number.

*/ 
#include<stdio.h>
int binary(int a)
{
    if (a==0)
        return 0;

    binary(a/2);
    printf("%d ",a % 2);
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a==0)
        printf("0");
    else
        binary(a);
    return 0;
}