/*
Assignment : 17
Topic : Star Pattern Problems
07||       Write a program to draw the following patterns.
            A   B   C   D   E
                A   B   C   D
                    A   B   C
                        A   B
                            A 
*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j < i; j++)
            printf("  ");
        
        for ( j = 1; j <= 6-i; j++)
            printf("%c ",64+j);
        
        printf("\n");
    }
    return 0;
}