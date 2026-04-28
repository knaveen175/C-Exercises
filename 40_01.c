/*
Assignment : 40
Topic : Handling Multiple Strings
01||       Write a function to store things, things from user, to the given 2d char array.

*/
#include<stdio.h>
void store(char a[][20])
{
    int i,j;
    printf("Enter name of cities: ");
    for ( i = 0; i < 2 ; i++)
        fgets( a[i], 20, stdin);
    
    for ( j = 0 ; j < 2 ; j++)
        for ( i = 0; i < 20 ; i++)
            if (a[j][i] == '\n')
                a[j][i] = '\0';
    
    printf("Entered Cities Name: ");
    for ( i = 0; i < 2 ; i++)
        printf("%s ",a[i]);
}
int main()
{
    char a[2][20];
    store(a);
    return 0;
}