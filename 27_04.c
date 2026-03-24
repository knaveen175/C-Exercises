/*
Assignment : 27
Topic : More on Recursion
04||       Write a recursive function to calculate sum of squares of first N natural number.

*/ 
#include<stdio.h>
int square(int a)
{
    int x;
    if (a==0)
        return 0;

    x = (a*a) + square(a-1);
        return x;
}
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = square(a);
    printf("%d ",b);
    return 0;
}