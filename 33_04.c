/*
Assignment : 33
Topic : Multi Dimensional Arrays
04||       Four Players are playing a tournament of Chess with round robin method (each player will play with every other player).Each win has 2 points, draw has 1 point and loose has 0 points. Declare a score board two dimensional array to store the scores of the players against each player.

*/
#include<stdio.h>
int main()
{
    int a[6][2],i,j;
    for ( i = 0; i < 6; i++)
        {
        printf("Enter score of %d match: ",i+1);
        for ( j = 0; j < 2; j++)
            scanf("%d",&a[i][j]);
        }

    printf("\t -- SCORE BOARD --\n");
    
    for ( i = 0; i < 6; i++)
    {
        printf("  Match %d  => ",i+1);
        for ( j = 0; j < 2; j++)
        {
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }       
    return 0;
}