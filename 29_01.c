/*
Assignment : 29
Topic : Array
01||       Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from user.

*/ 
#include<stdio.h>
int main()
{ 
    int a[10],i,sum=0;
    printf("Enter ten numbers: ");

    for ( i = 0; i < 10; i++)    
        scanf("%d",&a[i]);
    for ( i = 0; i < 10; i++)
        sum += a[i];
    
    printf("Sum = %d ",sum);
    return 0;
}