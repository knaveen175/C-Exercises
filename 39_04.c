/*
Assignment : 39
Topic : String and Functions
04||       Write a function to make acronym name from a given name. For example, "Ramesh Chand Tiwari" becomes "R C Tiwari", "Bhavesh Gupta" becomes "B Gupta".

*/
#include<stdio.h>
#include<string.h>
void acronym(char str[])
{
    int i,j,k,l,n=0,m,count=0;
    l = strlen(str);
    for ( i = l-1; i > 0; i--)
    {
        if (str[i] != ' ')
        {
            for ( j = i ; j > 0; j--)
            {
                if (str[j] == ' ')
                    break;
            }
            n = j;
        }
        if ( str[i] != ' ')
            break;
    }

    for ( i = 0; i < n; )
    {
        if (str[i] != ' ')
        { 
            count++;
            for ( j = i; j < n; j++)
            {
                if (str[j] == ' ')
                break;
            }
            for ( k = i+1; k < j; k++)
                str[k] = ' ';
            
            str[i+2] = str[j+1];
                i = j;
        }
        else
            i++;
    }

    for ( i = 2*count ; str[i] ; i++,n++)
        str[i] = str[n+1];
            
}
int main()
{
    char str[100];
    int l;
    printf("Enter a String: ");
    fgets( str , 100 , stdin);
    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';
    acronym(str);
    printf("%s",str);
    return 0;
}