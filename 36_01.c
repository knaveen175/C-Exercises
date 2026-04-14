/*
Assignment : 36
Topic : String and Functions
01||       Write a function to calculate length of string.

*/
#include<stdio.h>
#include<string.h>
int length(char str[], int a)
{
    int l;
    l = strlen(str);
    return l;
}
int main()
{
    char str[50];
    int i,l,a;
    printf("Enter a String: ");
    fgets( str , 50 , stdin );

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';

    a = length(str,50);
    printf("Length of String = %d",a);
    return 0;
}