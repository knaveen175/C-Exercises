/*
Assignment : 42
Topic : Pointers
03||       Write a function convert a given string into uppercase.

*/
#include<stdio.h>
void conversion (char *p)
{
    int i;
    for ( i = 0 ; p[i] ; i++ )
        if (p[i] >= 'a' && p[i] <= 'z')
            p[i] -= 32;
}
int main()
{
    char a[100];
    int i;
    printf("Enter a String: ");
    fgets( a, 100, stdin);
    for ( i = 0 ; a[i] ; i++)
        if( a[i] == '\n')
            a[i] = '\0';
    conversion(a);
    printf("The Entered string is Converted into Uppercase\nThe string is: ");
    printf("%s",a);
    return 0;
}