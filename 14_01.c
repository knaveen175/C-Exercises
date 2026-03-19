/*
Assignment : 14
Topic : Use any loop
01||       Write a program to calculate factorial of a number.

*/
#include<stdio.h>
int main()
{
    int i,N,fact=1;
    printf("Enter a Number- ");
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);    
    return 0;
}