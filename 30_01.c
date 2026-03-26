/*
Assignment : 30
Topic : Arrays
01||       Write a program to sort elements of an array of size 10. Take array values from the user.

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
    printf("Sorted Array: ");
    for ( i = 0; i < 10; i++)   
        printf("%d ", a[i]);
    return 0;
}