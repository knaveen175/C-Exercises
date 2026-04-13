/*
Assignment : 35
Topic : String Basics
04||       Write a program to find first occurence of a given character in a given string.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], a;
    int i,l;
    printf("Enter a String: ");
    fgets( str , 100 , stdin );

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';

    printf("Enter a character: ");
    scanf("%c",&a);

    for ( i = 0; str[i] ; i++)
        if (str[i] == a)
        {
            printf("First occurence of %c is at %d position",a,i+1);
            break;
        }
    return 0;
}