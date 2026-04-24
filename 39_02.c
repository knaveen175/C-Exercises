/*
Assignment : 39
Topic : String and Functions
02||       Write a function to find a word in the given string.

*/
#include<stdio.h>
#include<string.h>
int find(char str[], char word[])
{
    int i,j,l,len,n = 1;
    l = strlen(str);
    len = strlen(word);
    for ( i = 0 ; i <= l - len ; i++)
    {
        for ( j = 0; j < len; j++)
        {
            if (str[i + j] != word[j])
                break;
        }
        if ( j == len )
            return i;
        else
            return -1;
    } 
}
int main()
{
    char str[100],word[30];
    int l,len,a;
    printf("Enter a String: ");
    fgets( str, 100, stdin);
    printf("Enter a Word: ");
    fgets( word, 30, stdin);
    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';
    len = strlen(word);
    if (word[len-1] == '\n')
        word[len-1] = '\0';
    a = find(str, word);

    if (a == -1)
        printf("Word is not found");
    else
        printf(" Given Word starts from index = %d",a);
    return 0;
}