/*
Assignment : 38
Topic : String and Functions
03||       Write a function to count words in a given string.

*/
#include<stdio.h>
#include<string.h>
int words(char str[])
{
    int i,j,l,count = 0;
    l = strlen(str);
    for ( i = 0; str[i] ;)
    {
        if (str[i] != ' ')
        {
            count++;
            for ( j = i; str[j]; j++)
            {
                if (str[j] == ' ')
                {
                    break;
                }
            }
            i = j;
        }
        else
            i++;
    }
    return count;
}
int main()
{
    char str[100];
    int l,a;
    printf("Enter a String: ");
    fgets( str , 100, stdin);

    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';
    a = words(str);
    printf("No. of words = %d",a);
    return 0;
}