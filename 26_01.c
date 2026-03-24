/*
Assignment : 26
Topic : Recursion
01||       Write a recursive function to print first N even natural numbers in reverse order.

*/ 
#include<stdio.h>
int even(int a)
{
    if (a==0)
        return 0;
    printf("%d ",2*a);
    even(a-1);
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