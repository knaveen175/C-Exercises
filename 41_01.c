/*
Assignment : 41
Topic : Handling Multiple Strings
01||       Write a program to find words ending with a letter 's' and store each such word in a 2d char array. 

*/
#include<stdio.h>
#include<string.h>
void word(char str[], char letter[][20])
{
    int i,j,k,m=0,n;
    for ( i = 0 ; str[i] ; i++)
    {
        if (str[i] == 's')
            if (str[i+1] == ' ')
            {    
                for ( j = i ; j > 0 ; j--)
                    if ( j == 0 || str[j-1] == ' ' )
                        break;
        
                for ( n = 0 ; n < 20 && j <= i ; n++, j++ )
                    letter[m][n] = str[j];
            
                letter[m][n] = '\0';
                m++; 
            } 
            else if (str[i+1] == '\0')
            {
                for (j = i ; j > 0 ; j--)
                    if (str[j-1] == ' ')
                        break;

                for ( n = 0 ; n < 20 && j <= i ; j++, n++)
                    letter[m][n] = str[j];
                
            }
    }
    letter[m][n] = '\0';
    letter[m+1][0] = '\0';

}
int main()
{
    char str[100], letter[10][20];
    int i;
    printf("Enter a String: ");
    fgets( str, 100, stdin);
    for(i=0; str[i]; i++)
        if (str[i] == '\n')
            str[i] = '\0';

    word(str, letter);
    for (i = 0 ; letter[i][0] != '\0' ; i++ )
        printf("%s\n",letter[i]);
    return 0;
}