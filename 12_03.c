/*
Assignment : 12
Topic : while loop
03||       Write a program to print first N natural numbers in reverse order.

*/
#include<stdio.h>
int main()
{
    int N;
    printf("Enter a Number- ");
    scanf("%d",&N);
    while (N>=1)
    {
        printf("%d ",N);
        N--;
    }
    return 0;
}