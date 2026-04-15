/*
Assignment : 37
Topic : String and Functions
01||       Write a function to count vowels in a given string.

*/
#include<stdio.h>
#include<string.h>
int vowels(char str[])
{
    int i,l,count = 0;
    l = strlen (str);
    for ( i = 0; i < l; i++)
    {
        if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            count++;
    }
    return count;
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

    a = vowels(str);
    printf("No. of Vowels = %d",a);
    return 0;
}