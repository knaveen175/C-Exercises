/*
Assignment : 11
Topic : Iterative Control Statements
05||       Write a program to print the first 10 odd natural numbers in reverse order.

*/
#include<stdio.h>
int main()
{
    int i=10;
    while (i>=1)
    {
        printf("%d ",2*i-1);
        i--;
    }
    return 0;
}