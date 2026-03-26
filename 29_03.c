/*
Assignment : 29
Topic : Array
03||       Write a program to calculate the sum of all even numbers and sum of all odd numbers which are stored in an array of size 10. Take array values from user.

*/ 
#include<stdio.h>
int main()
{ 
    int a[10],i,even=0,odd=0;
    printf("Enter ten numbers: ");

    for ( i = 0; i < 10; i++)    
        scanf("%d",&a[i]); 

    for ( i = 0; i < 10; i++)    
    {
        if(a[i] % 2 ==0)
                even += a[i];
        else
                odd += a[i];
    }
    printf("Sum of even numbers = %d ",even);
    printf("Sum of odd numbers = %d ",odd);
    return 0;
}