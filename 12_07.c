/*
Assignment : 12
Topic : while loop
07||       Write a program to print first N even natural numbers in reverse order.

*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (N>=1)
    {
        printf("%d ",2*N);
        N--;
    }
    return 0;
}