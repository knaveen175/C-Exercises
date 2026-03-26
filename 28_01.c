/*
Assignment : 28
Topic : More on Recursion
01||       Write a recursive function to calculate factorial of a given number.

*/ 
#include<stdio.h>
int fact(int a)
{
    int x;
    if (a==1)
        return 1;

    x = a * fact(a-1);
        return x;
}
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = fact(a);
    printf("%d ",b);
    return 0;
}