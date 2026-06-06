/*
Assignment : 46
Topic : DMA
03||       Write a program to calculate the sum of n numbers entered by the user using malloc and free.

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p, n;
    printf("How many numbers are you entering: ");
    scanf("%d",&n);
    p = (int*) malloc ( 4 * n );
    int i, sum = 0;
    printf("Enter the numbers: ");
    for ( i = 0 ; i < n ; i++)
        scanf("%d",&p[i]);
    for ( i = 0 ; i < n ; i++)
        sum += p[i];
    printf("Sum = %d",sum);
    free(p);
    return 0;
}