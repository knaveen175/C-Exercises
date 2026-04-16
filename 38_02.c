/*
Assignment : 38
Topic : String and Functions
02||       Write a function to trim a string (removing leading spaces from both the ends).

*/
#include<stdio.h>
#include<string.h>
void check(char str[])
{
    int x,y,i,l;
    char temp;
    l = strlen(str);
    for ( x = 0 ; str[x] ; x++)
        if (str[x] != ' ')
            break;            
    for ( y = l - 1 ; y >= 0 ; y--)
        if (str[y] != ' ')
            break;
    
    for ( i = 0; i <= y-x ; i++)
        str[i] = str[x+i];
    for ( i = y-x+1; i < l; i++)
        str[i] = '\0';
    
    printf("%s",str);
}
int main()
{
    char str[100];
    int l;
    printf("Enter a String: ");
    fgets( str , 100, stdin);

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';
    check(str);
    return 0;
}