/*
Assignment : 39
Topic : String and Functions
03||       Write a function to make first character of each word capital.

*/
#include<stdio.h>
#include<string.h>
void Capital( char str[] )
{
    int i,j;
    for ( i = 0; str[i] ; )
    {
        if (str[i] != ' ')
        {
            if (str[i] >= 'a' && str[i] <= 'z')
                (str[i] -= 32);
            for ( j = i ; str[j] ; j++)
                if (str[j] == ' ')
                    break;
            i = j;
        }
        else
            i++;        
    }
}
int main()
{
    char str[100];
    int l;
    printf("Enter a String: ");
    fgets(str , 100, stdin);
    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] == '\0';

    Capital(str);
    printf("%s",str);
    return 0;
}