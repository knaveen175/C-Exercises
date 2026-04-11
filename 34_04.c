/*
Assignment : 34
Topic : String Basics
04||       Write a program to count spaces in a given string.

*/
#include<stdio.h>
int main()
{
    char str[50];
    int i,count = 0;
    printf("Enter a line: ");
    fgets( str , 50 , stdin );

    for ( i = 0; str[i] ; i++)
        if (str[i] == 32)
            count++;

    if (str[i-1] = '\n')
        str[i-1] = '\0';
        
    printf("Occurence of vowels is %d times",count);
    return 0;
}