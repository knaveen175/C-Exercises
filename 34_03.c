/*
Assignment : 34
Topic : String Basics
03||       Write a program to count vowels in a given string.

*/
#include<stdio.h>
int main()
{
    char str[50];
    int i,count = 0;
    printf("Enter a line: ");
    fgets( str , 50 , stdin );

    for ( i = 0; str[i] ; i++)
        if (str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 85 || str[i] == 97 ||    str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
            count++;

    if (str[i-1] = '\n')
        str[i-1] = '\0';

    printf("Occurence of vowels is %d times",count);
    return 0;
}