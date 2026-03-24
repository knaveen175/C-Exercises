/*
Assignment : 25
Topic : Recursion
03||       Write a recursive function to print first N odd natural numbers.

*/ 
#include<stdio.h>
int odd(int a)
{
    if (a==0)
        return 0;
    odd(a-1);
    printf("%d ",2*a-1);
    return a;
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    odd(a);
    return 0;
}