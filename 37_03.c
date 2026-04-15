/*
Assignment : 37
Topic : String and Functions
01||       Write a function to find a character in a given string between specified indices(start index (inclusive) and end index(exclusive)).

*/
#include<stdio.h>
#include<string.h>
int character(char str[], char c)
{
    int i,l,in,ex;
    printf("Enter start index(inclusive) & end index(exclusive): ");
    scanf("%d %d",&in,&ex);

    l = strlen(str);
    if (ex >= l)
        ex = l;
    if (in < 0)
        in = 0;   
    
    for ( i = in; i < ex ; i++)
        if (str[i] == c)
            return i;
    
    return -1;
}
int main()
{   
    char str[100],c;
    int i,a,l;
    printf("Enter a string: ");
    fgets ( str, 100, stdin);
    printf("Enter a Character: ");
    scanf(" %c",&c);

    l = strlen(str);
    if ( str[ l - 1 ] == '\n')
        str[ l - 1 ] = '\0';

    a = character(str, c);
    if (a != -1)
        printf("Index of Occurence of %c = %d",c,a);
    else
        printf(" Given Character is not found between the given specified indices ");
    return 0;
}