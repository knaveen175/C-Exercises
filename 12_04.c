/*
Assignment : 12
Topic : while loop
04||       Write a program to print first N odd natural numbers.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("%d ",2*i-1);
        i++;
    }
    return 0;
}