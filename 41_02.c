/*
Assignment : 41
Topic : Handling Multiple Strings
02||       Write a function to return the most repeating character in the list of Strings. 

*/
#include<stdio.h>
#include<string.h>
int repeat(char str[])
{
    int i,max=0;
    char a[26]={0};
    for ( i = 0 ; str[i] ; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            a[ str[i] - 'a']++;
        if (str[i] >= 'A' && str[i] <= 'Z')
            a[ str[i] - 'A']++; 
    }
    a[max] = a[0];
    for (i = 1 ; i < 26 ; i++)
    {
        if (a[i]> a[max])
            max = i;
    }
    return max;
}
int main()
{
    char str[100], a;
    int i;
    printf("Enter a String: ");
    fgets( str, 100, stdin);
    for ( i = 0 ; str[i] ; i++)
        if(str[i + 1] == '\n')
            str[i + 1] = '\0';

    a = repeat(str);
    printf("Most repeating character = %c",a+97);
    return 0;
}