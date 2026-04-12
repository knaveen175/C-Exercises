/*
Assignment : 35
Topic : String Basics
03||       Write a program in C to count the total no of alphabets, digits and special characters in a string.

*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],temp;
    int i,l,a = 0,d = 0,s = 0;
    printf("Enter a line: ");
    fgets( str , 100 , stdin );

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';

    for ( i = 0 ; str[i] ; i++)
        if (('a' <= str[i] && str[i] <= 'z' )|| 
            ('A' <= str[i] && str[i] <= 'Z'))
            a++;
        else if ('0' <= str[i] && str[i] <= '9')
            d++;
        else
            s++;
            
    printf("No of Alpabets = %d\nNo of Digits = %d\nNo of Special Characters = %d",a,d,s);
    return 0;
}