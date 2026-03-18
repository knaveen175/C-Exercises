/*
Assignment : 12
Topic : while loop
08||       Write a program to print squares of first N natural numbers.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}