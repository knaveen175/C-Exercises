/*
Assignment : 39
Topic : String and Functions
01||       Write a function to count frequency of each character of the given string.

*/
#include<stdio.h>
#include<string.h>
void frequency(char str[])
{
    int i,j,k,n,l,count;
    l = strlen(str);
    for ( i = 0 ; str[i] ; i++)
    {   
        n=1;
        if(i>0)
        {
            for ( k = i-1 ; k>=0 ; k-- )
            if (str[i] == str[k] )
            {   
                n=0;
                break;
            }
        }
        else
            n=1;   
        if (n == 1)
        {
            count = 0;
            for( j = 0 ; j < l ; j++ )
                {
                    if (str[i] == str[j])
                        count++;
                }
            printf("Frequency of %c = %d\n",str[i],count);
        }
    }
}
int main()
{
    char str[100];
    int l;
    printf("Enter a String: ");
    fgets( str, 100, stdin);
    l = strlen(str);
    if (str[l-1] == '\n')
        str[l-1] = '\0';
    frequency(str);
    return 0;   
}