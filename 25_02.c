/*
Assignment : 25
Topic : Recursion
02||       Write a recursive function to print first N natural numbers in reverse order.

*/ 
#include<stdio.h>
int reverse(int x)
{
    if (x==0)
        return 0;
    printf("%d ",x);
    reverse(x-1);
    return x;
}
int main()
{
    int x,y;
    printf("Enter a Number: ");
    scanf("%d",&x);
    reverse(x);
    return 0;
}
