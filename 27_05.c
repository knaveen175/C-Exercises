/*
Assignment : 27
Topic : More on Recursion
05||       Write a recursive function to calculate sum of digits of a given number.

*/ 
#include<stdio.h>
int digits(int a)
{
    int x;
    if (a==0)
        return 0;

    x = (a%10) + digits(a/10);
        return x;
}
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b = digits(a);
    printf("%d ",b);
    return 0;
}