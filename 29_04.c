/*
Assignment : 29
Topic : Array
04||       Write a program to find the greatest number stored in an array of size 10. Take array values from the user.

*/ 
#include<stdio.h>
int main()
{ 
    int a[10],i,large;
    printf("Enter ten numbers: ");

    for ( i = 0; i < 10; i++)    
        scanf("%d",&a[i]); 

    large = a[0];

    for ( i = 1; i < 10; i++)    
    {
        if (a[i] > large)
            large = a[i];
    }
    printf("Greatest Number = %d ",large);
    return 0;
}