/*
Assignment : 25
Topic : Recursion
05||       Write a recursive function to print first N even natural numbers.

*/ 
#include<stdio.h>
int even(int a)
{
    if (a==0)
        return 0;
    even(a-1);
    printf("%d ",2*a);
    return a;
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    even(a);
    return 0;
}