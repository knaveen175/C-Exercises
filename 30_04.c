/*
Assignment : 30
Topic : Arrays
04||       Write a program to sort an array of 10 elements in Decreasing order. 

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
    printf("Sorted Array in Decreasing order: ");
    for ( i = 9; i >= 0; i--)   
        printf("%d ", a[i]);
    return 0;
}