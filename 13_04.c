/*
Assignment : 13
Topic : Use any loop
04||       Write a program to calculate sum of squares of first N natural numbers.

*/
#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter a Number- ");
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {
        sum=sum + i*i;
    }
    printf("%d",sum);    
    return 0;
}