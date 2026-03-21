/*
Assignment : 17
Topic : Star Pattern Problems
06||       Write a program to draw the following patterns.
            1
            2   1
            3   2   1
            4   3   2   1
*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <= 4 ; i++)
    {
        for ( j = i; 1 <= j ;j-- )
        {
            printf("%d ",j);           
        }
        printf("\n");
    }
    return 0;
}