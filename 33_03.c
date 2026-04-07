/*
Assignment : 33
Topic : Multi Dimensional Arrays
03||       Write a program to print the transpose of a given matrix.

*/
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("Enter elements of matrix (3x3): ");
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    
    for (i = 0; i < 3; i++)
        {
        for ( j = 0; j < 3; j++)
            printf("%d ",a[j][i]);

        printf("\n");
        }
    return 0;
}