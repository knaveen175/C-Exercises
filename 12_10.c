/*
Assignment : 12
Topic : while loop
10||       Write a program to print table of N.

*/
#include<stdio.h>
int main()
{
    int i=1,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (i<=10)
    {
        printf("%d ",i*N);
        i++;
    }
    return 0;
}