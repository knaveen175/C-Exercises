/*
Assignment : 37
Topic : String and Functions
01||       Write a function to check whether a given string is an alphanumeric string or not.(Alphanumeric string must contain at lest one alphabet and one digit)

*/
#include<stdio.h>
#include<string.h>
int alpha(char str[])
{
    int i,x = 0,y = 0;
    for ( i = 0; str[i] ; i++)
    {
        if (( str[i] >= 'a' && str[i] <= 'z') ||
            ( str[i] >= 'A' && str[i] <= 'Z'))
                x = 1;
        if (( str[i] >= '0' && str[i] <= '9'))
                y = 1;
    }
    if ( x && y )
        return 1;
    else
        return 0;
}
int main()
{   
    char str[100];
    int l,a;
    printf("Enter a string: ");
    fgets ( str, 100, stdin);

    l = strlen(str);
    if ( str[ l - 1 ] == '\n')
        str[ l - 1 ] = '\0';

    a = alpha(str);
    if (a == 1)
        printf("Given String is Alphanumeric");
    else 
        printf("Given String is not Alphanumeric");
    return 0;
}