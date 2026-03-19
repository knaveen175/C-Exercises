/*
Assignment : 14
Topic : Use any loop
03||       Write a program to check whether a given number is a Prime number or not.

*/
#include<stdio.h>
int main()
{
    int i,n,j;
    printf("Enter a Number- ");
    scanf("%d",&n);
    for ( i = 2; i < n; i++)
        {    
            if (j=(n%i==0));
                break;
        }   
    if (j==0)
        printf("Prime Number");
    else
        printf("Not a Prime Number");
    return 0;
}