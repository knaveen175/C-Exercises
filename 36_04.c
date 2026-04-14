/*
Assignment : 36
Topic : String and Functions
04||       Write a function to transform string into uppercase.

*/
#include<stdio.h>
#include<string.h>
void transform(char str[], int a)
{
    int l,i,temp;
    l = strlen(str);
    for ( i = 0; i < l; i++)
        if ( str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32 ;
       
    printf("%s",str);   
}   
int main()
{
    char str[100];
    int i,l;
    printf("Enter a String: ");
    fgets( str , 100 , stdin );

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';

    transform(str,100);
    return 0;
}