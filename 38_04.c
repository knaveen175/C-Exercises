/*
Assignment : 38
Topic : String and Functions
04||       Write a function to reverse a string word wise.(For Example if the given string is 
"Mysirg Education Services" then the resulting string should be "Services Education Mysirg")

*/
#include<stdio.h>
#include<string.h>
void words(char str[])
{
    int i,j,k,l;
    char temp;
    l = strlen(str);
    for ( i = 0; i < l/2 ; i++)
    {
        temp = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = temp;
    }

    for ( i = 0 ; str[i] ;)
    {
        if (str[i] != ' ')
        {
            for ( j = i; str[j]; j++)
                if (str[j] == ' ')
                    break;

            for ( k = 0; k < (j - i) / 2; k++)
            {
                temp = str[i + k];
                str[i + k] = str[j - k - 1];
                str[j - k -1] = temp;
            }
            i = j;
        }
        else
            i++;
    }
    printf("Reversed String = %s",str);
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
    words(str);
    return 0;
}