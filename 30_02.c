/*
Assignment : 30
Topic : Arrays
02||       Write a program to find second largest in an array. Take array values from user.

*/ 
#include<stdio.h>
int main()
{ 
    int a[10],i,j,small,temp;
    printf("Enter ten numbers: ");

    for ( i = 0; i < 10; i++)    
        scanf("%d",&a[i]); 

    
    for (i = 0; i < 9; i++)
    {
        small = i;
        for(j = i+1; j < 10; j++)
        {
            if (a[j] < a[small])
                small = j;
        }
        if (small != i)
        {
            temp = a[i];
            a[i] = a[small];
            a[small] = temp;
        }
    }
    printf("Second Largest: %d ",a[8]);
    return 0;
}