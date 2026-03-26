/*
Assignment : 29
Topic : Array
02||       Write a program to calculate the average of numbers stored in an array of size 10. Take array values from user.

*/ 
#include<stdio.h>
int main()
{ 
    int a[10],i;
    float average=0;
    printf("Enter ten numbers: ");

    for ( i = 0; i < 10; i++)    
        scanf("%d",&a[i]);
    for ( i = 0; i < 10; i++)
        average += a[i];
    
    printf("Sum = %f ",average/10);
    return 0;
}