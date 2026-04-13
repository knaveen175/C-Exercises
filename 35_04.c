/*
Assignment : 35
Topic : String Basics
04||       Write a program in C to copy one string to another char array.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], array[100];
    int i,l;
    printf("Enter a line: ");
    fgets( str , 100 , stdin );

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';

    for ( i = 0 ; str[i] ; i++)
        array[i] = str[i];

    printf("String = %s\n",str);
    printf("Array = ");
    for ( i = 0 ; i < l-1 ; i++)
        printf("%c",array[i]);
    return 0;
}