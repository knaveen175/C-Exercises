/*
Assignment : 41
Topic : Handling Multiple Strings
04||       Write a function to store all the words in a given string which are starting from 'a', in a two dimensional char array. 

*/
#include<stdio.h>
#include<string.h>
void start(char str[], char word[][20])
{
    int i,j,k,m=0,n;
    for ( i = 0 ; str[i] ; i++)
    {
        if (i== 0 && str[0] != ' ')
            if (str[0] == 'a' || str[0] == 'A')
            {   
                for ( j = 0 ; str[j] ; j++)
                {
                    if(str[j] == ' ')
                        break;
                }
                for ( k = 0, n=0 ; n < 20 && k < j ; k++,n++)
                {
                    word[m][n] = str[k];
                }
                word[m][n] = '\0';
                m++;
            }

        if (i > 0 && str[i] == ' ')
        {
            if (str[i+1] == 'a' || str[i+1] == 'A')
            {
                for ( j = i+1 ; str[j] ; j++)
                    if (str[j] == ' ')
                        break;

                for ( k = i+1, n=0 ; n < 20 && k < j ; k++,n++)
                {
                    word[m][n] = str[k];
                }
                word[m][n] = '\0';
                m++;
            }
        }
    }
    word[m][0] = '\0';

}
int main()
{
    char str[100],word[10][20];
    int i;
    printf("Enter a String: ");
    fgets( str, 100, stdin);
    for ( i = 0 ; str[i] ; i++)
    if (str[i] == '\n')
        str[i] = '\0';

    start(str, word);
    for ( i = 0 ; word[i][0] != '\0' ; i++)
        printf("%s ",word[i]);
    return 0;
}