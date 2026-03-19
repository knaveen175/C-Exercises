/*
Assignment : 13
Topic : Use any loop
05||       Write a program to calculate sum of cubes of first N natural numbers.

*/
#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter a Number- ");
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {
        sum=sum + i*i*i;
    }
    printf("%d",sum);    
    return 0;
}