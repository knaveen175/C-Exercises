/*
Assignment : 12
Topic : while loop
01||       Write a program to print MySirG N times on the screen.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=N)
    {
        printf("MySirG ");
        i++;
    }
    return 0;
}