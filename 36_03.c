/*
Assignment : 36
Topic : String and Functions
03||       Write a function to compare two string.

*/
#include<stdio.h>
#include<string.h>
int compare(char str1[],char str2[], int a)
{
    int l,len,i,temp;
    l = strlen(str1);
    len = strlen(str2);

    for ( i = 0 ; str1[i] && str2[i] ; i++)
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        
}   
int main()
{
    char str1[100], str2[100];
    int i,l,a;
    printf("Enter a String: ");
    fgets( str1 , 100 , stdin );

    printf("Enter another String: ");
    fgets( str2 , 100 , stdin );

    l = strlen(str1);
    if (str1[l-1] == '\n')
        str1[l-1] = '\0';
    l = strlen(str2);
    if (str2[l-1] == '\n')
        str2[l-1] = '\0';

    a = compare(str1,str2,100);
    printf("%d",a);
    return 0;
}