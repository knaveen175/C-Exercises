/*
Assignment : 26
Topic : Recursion
02||       Write a recursive function to print squares of first N natural numbers.

*/ 
#include<stdio.h>
int square(int a)
{
    if (a==0)
        return 0;
    square(a-1);
    printf("%d ",a*a);
    return a;
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    square(a);
    return 0;
}