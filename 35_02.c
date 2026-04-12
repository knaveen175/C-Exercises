/*
Assignment : 35
Topic : String Basics
02||       Write a program to reverse a string.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    int i,l;
    printf("Enter a line: ");
    fgets( str , 50 , stdin );

    l=strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';
    
    l=strlen(str);
    for ( i = 0; i < l / 2 ; i++)
        {    
            temp = str[i];
            str[i] = str[l - i - 1];
            str[l - i - 1] = temp;
        }
            
    printf("%s",str);
    return 0;
}