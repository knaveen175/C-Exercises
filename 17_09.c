/*
Assignment : 17
Topic : Star Pattern Problems
09||       Write a program to draw the following patterns.
            A B C D E
              B C D E
                C D E
                  D E
                    E

*/
#include<stdio.h>
int main()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j < i; j++)
        {
            printf("  ");
        }
        
        for ( j = 1; j <= 6-i; j++)
        {
            printf("%c ",63+i+j);
        }
        printf("\n");
    }
    return 0;
}