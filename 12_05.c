/*
Assignment : 12
Topic : while loop
05||       Write a program to print first N odd natural numbers in reverse order.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("%d ",2*N-1);
        N--;
    }
    return 0;
}