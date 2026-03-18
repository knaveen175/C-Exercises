/*
Assignment : 12
Topic : while loop
09||       Write a program to print cubes of first N natural numbers.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("%d ",i*i*i);
        i++;
    }
    return 0;
}