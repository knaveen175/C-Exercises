/*
Assignment : 33
Topic : Multi Dimensional Arrays
02||       Write a program to calculate the product of two matrices each of order 3 x 3.

*/
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],s[3][3],i,j,k;
    printf("Enter the elements of the 1st martix(3x3): ");
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
            scanf("%d",&a[i][j]);
    
    printf("Enter the elements of the 2nd martix(3x3): ");
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
            scanf("%d",&b[i][j]);

    
    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
            s[i][j] = 0;

    for ( i = 0; i < 3; i++)
        for ( j = 0; j < 3; j++)
            for ( k = 0; k < 3; k++)
                s[i][j] += a[i][k] * b[k][j];
    
    printf("The Product of the two matrices is- \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
            printf("%d ",s[i][j]);
        
        printf("\n");
    }
    return 0;
}