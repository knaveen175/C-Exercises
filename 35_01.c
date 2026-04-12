/*
Assignment : 35
Topic : String Basics
01||       Write a program to convert a given string into lowercase.

*/
#include<stdio.h>
int main()
{
    char str[50];
    int i,j = 0;
    printf("Enter a line: ");
    fgets( str , 50 , stdin );

    for ( i = 0; str[i] ; i++)
        for ( j = 'A' ; j <= 'Z' ; j++)
            if (str[i] == j)
                str[i] = j+32;
            
    if (str[i-1] = '\n')
        str[i-1] = '\0';
        
    printf("%s",str);
    return 0;
}