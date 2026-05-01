/*
Assignment : 40
Topic : Handling Multiple Strings
04||       Write a function to store each word a string in a 2 dimensional char array.

*/
#include<stdio.h>
void storeWords(char str[], char words[][20])
{
    int i = 0, j = 0, k = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            words[j][k] = '\0'; 
            j++;
            k = 0;
        }
        else
        {
            words[j][k] = str[i];
            k++;
        }
        i++;
    }
    words[j][k] = '\0'; 
    words[j + 1][0] = '\0'; 
}
int main()
{
    char words[10][20], str[50];
    int i;
    printf("Enter a String: ");
    fgets( str, 50, stdin );

    storeWords(str, words);
    for (i = 0; words[i][0] != '\0' ; i++)
        printf("%s\n",words[i]);

    return 0;
}