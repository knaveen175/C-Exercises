/*
Assignment : 37
Topic : String and Functions
02||       Write a function to find a character in a given string. Return index of first occurence of a given character. Return -1 if charcter not found.

*/
#include<stdio.h>
#include<string.h>
int character(char str[])
{
    int i;
    char c;
    printf("Enter a Character: ");
    scanf("%c",&c);
    for ( i = 0; str[i] ; i++)
        if (str[i] == c)
            return i;
        else if (str[i] == 0)
            return -1;   
}
int main()
{
    char str[100];
    int i,a,l;
    printf("Enter a string: ");
    fgets ( str, 100, stdin);
    
    l = strlen(str);
    if ( str[ l - 1 ] == '\n')
        str[ l - 1 ] = '\0';

    a = character(str);
    if (a != -1)
        printf("Index of 1st Occurence = %d",a);
    else
        printf(" Given Character is not found in the string ");
    return 0;
}