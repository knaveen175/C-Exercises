/*
Assignment : 34
Topic : String Basics
02||       Write a program to count the occurence of a given character in a given string.

*/
#include<stdio.h>
#include<conio.h>
int main()
{
    char str[30],a;
    int i,count = 0;
    printf("Enter your name: ");
    fgets( str , 30 , stdin );
    printf("Enter any character(from your name): ");
    a = getch();
    for ( i = 0; str[i] ; i++)
        if (a == str[i])
            count++;
    if (str[i-1] = '\n')
        str[i-1] = '\0';
    printf("Occurence of %c is %d times",a,count);
    return 0;
}