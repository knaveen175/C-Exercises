/*
Assignment : 36
Topic : String and Functions
02||       Write a function to reverse a string.

*/
#include<stdio.h>
#include<string.h>
void reverse(char str[], int a)
{
    int l,i,temp;
    l = strlen(str);
    for ( i = 0; i < l/2; i++)
    {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }
    printf("%s",str);
}
int main()
{
    char str[100];
    int i,l,a;
    printf("Enter a String: ");
    fgets( str , 100 , stdin );

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';

    reverse(str,100);
    return 0;
}