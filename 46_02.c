/*
Assignment : 46
Topic : DMA
02||       Define a program to ask the user to input a number of data values he would like to enter and then create an array dynamically to accomodate the data values. Now take the input from the user and display the average of data values.

*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, i, *p;
    printf("How many Data value you would like to enter: ");
    scanf("%d",&a);
    p = (int*) malloc (4*a);
    printf("Enter %d Data values: ",a);
    for ( i = 0 ; i < a ; i++)
        scanf("%d",&p[i]);
    float Avg = 0;
    for ( i = 0; i < a; i++)
        Avg += p[i];
    Avg /= a;
    printf("Average of the entered data values = %lf",Avg);
    free (p);
    return 0;
}
