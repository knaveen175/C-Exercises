/*
Assignment : 13
Topic : Use any loop
02||       Write a program to calculate sum of first N even natural numbers.

*/
#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter a Number- ");
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {
        sum=sum + 2*i;
    }
    printf("%d",sum);    
    return 0;
}