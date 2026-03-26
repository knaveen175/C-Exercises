/*
Assignment : 28
Topic : More on Recursion
04||       Write a program in C to count the digits of a given number using recursion.

*/ 
#include<stdio.h>
int digits(int n)
{
    int x;
    if (n==0)
        return 0;
    x = 1 + digits(n/10);
    return x;
}
int main()
{ 
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = digits(a);
    if (a==0)
        printf("digits = 1");
    else
        printf("digits = %d ",b);
    return 0;
}