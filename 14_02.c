/*
Assignment : 14
Topic : Use any loop
02||       Write a program to count digits in a given number.

*/
#include<stdio.h>
int main()
{
    int i,N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    for (i = 0; N > 0; i++)
    {
        N=N/10;
    }
    printf("Number of digits = %d",i);    
    return 0;
}