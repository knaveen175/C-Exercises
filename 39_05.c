/*
Assignment : 39
Topic : String and Functions
05||       Write a function to concatenate two strings.

*/
#include<stdio.h>
#include<string.h>
void strings(char s1[], char s2[], char s[])
{
    strcpy(s,s1);
    strcat(s,s2);
    printf("%s",s);
}
int main()
{
    char s1[100], s2[100], s[200];
    int i;
    printf("Enter 1st String: ");
    fgets( s1 , 100 , stdin);
    printf("Enter 2nd String: ");
    fgets( s2 , 100 , stdin);
    for ( i = 0 ; s1[i] ; i++)
        if (s1[i] == '\n')
            s1[i] = '\0';
    for ( i = 0 ; s2[i] ; i++)
        if (s2[i] == '\n')
            s2[i] = '\0';
    for ( i = 0 ; s[i] ; i++)
        if (s[i] == '\n')
            s[i] = '\0';

    strings(s1, s2, s);
    return 0;
}