/*
Assignment : 25
Topic : Recursion
01||       Write a recursive function to print first N natural numbers.

*/ 
#include<stdio.h>
int f(int x)
{
    if (x==0)
        return 0;
    f(x-1);
    printf("%d ",x);
    return x;
}
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    f(x);
    return 0;
}
