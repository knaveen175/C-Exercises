/*
Assignment : 38
Topic : String and Functions
01||       Write a function to check whether a given string is palindrome or not.

*/
#include<stdio.h>
#include<string.h>
void check(char str[])
{
    int i,j = 0,l;
    l = strlen(str);
    for ( i = 0; i < l/2; i++)
    {
        if (j = (str[i] != str[l - i - 1]))
            break;
    }
    if ( j == 1 )
        printf("Given String is not Palindrome");
    else
        printf("Given String is Palindrome");
}
int main()
{
    char str[100];
    int l;
    printf("Enter a String: ");
    fgets( str , 100, stdin);

    l = strlen(str);
    if (str[l-1] == '\n');
        str[l-1] = '\0';
    check(str);
    return 0;
}