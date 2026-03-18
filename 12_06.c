/*
Assignment : 12
Topic : while loop
06||       Write a program to print first N even natural numbers.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("%d ",2*i);
        i++;
    }
    return 0;
}