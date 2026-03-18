/*
Assignment : 11
Topic : Iterative Control Statements
03||       Write a program to print the first 10 natural numbers in reverse order.

*/
#include<stdio.h>
int main()
{
    int i=10;
    while (i>=1)
    {
        printf("%d ",i);
        i--;
    }
    return 0;
}