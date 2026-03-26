/*
Assignment : 29
Topic : Array
05||       Write a program to find the smallest number stored in an array of size 10. Take array values from the user.

*/ 
#include<stdio.h>
int main()
{ 
    int a[10],i,small;
    printf("Enter ten numbers: ");

    for ( i = 0; i < 10; i++)    
        scanf("%d",&a[i]); 

    small = a[0];

    for ( i = 1; i < 10; i++)    
    {
        if (a[i] < small)
            small = a[i];
    }
    printf("Smallest Number = %d ",small);
    return 0;
}