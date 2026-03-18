/*
Assignment : 11
Topic : Iterative Control Statements
09||       Write a program to print cubes of the first 10 natural numbers.

*/
#include<stdio.h>
int main()
{
    int i=1;
    while (i<=10)
    {
        printf("%d ",i*i*i);
        i++;
    }
    return 0;
}