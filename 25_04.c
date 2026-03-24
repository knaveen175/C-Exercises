/*
Assignment : 25
Topic : Recursion
03||       Write a recursive function to print first N odd natural numbers in reverse order.

*/ 
#include<stdio.h>
int reverse(int a)
{
    if (a==0)
        return 0;
    printf("%d ",2*a-1);
    reverse(a-1);
    return a;
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    reverse(a);
    return 0;
}