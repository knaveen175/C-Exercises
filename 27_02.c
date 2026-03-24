/*
Assignment : 27
Topic : More on Recursion
02||       Write a recursive function to calculate sum of first N odd natural number.

*/ 
#include<stdio.h>
int num(int a)
{
    int x;
    if (a==0)
        return 0;

    x = (2*a-1) + num(a-1);
        return x;
}
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = num(a);
    printf("%d ",b);
    return 0;
}