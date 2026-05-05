/*
Assignment : 41
Topic : Handling Multiple Strings
05||       A 2d array is full with 10 email ids. Write a function to find how many of them belong to gmail.com 

*/
#include<stdio.h>
#include<string.h>
int find(char str[][30])
{
    int i,j,k,p,count=0;
    for ( i = 0 ; i < 10 ; i++)
    {
        p = 0;
        for ( j = 0, k = 1 ; str[i][j] ; j++)
        {
            if (str[i][j] == '@')
            {
                if(str[i][j+k] == 'g' || str[i][j+k] == 'G')
                    p++;
                k++;
                if(str[i][j+k] == 'm' || str[i][j+k] == 'M')
                    p++;
                k++;
                if(str[i][j+k] == 'a' || str[i][j+k] == 'A')
                    p++;
                k++;
                if(str[i][j+k] == 'i' || str[i][j+k] == 'I')
                    p++;
                k++;
                if(str[i][j+k] == 'l' || str[i][j+k] == 'L')
                    p++;
                k++;
                if(str[i][j+k] == '.')
                    p++;
                k++;
                if(str[i][j+k] == 'c' || str[i][j+k] == 'C')
                    p++;
                k++;
                if(str[i][j+k] == 'o' || str[i][j+k] == 'O')
                    p++;
                k++;
                if(str[i][j+k] == 'm' || str[i][j+k] == 'M')
                    p++;
                k++;
                if (str[i][j+k] != '\0')
                    break;

                if (p == 9)
                    count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    char str[10][30];
    int i,j,a;
    for ( i = 0 ; i < 10 ; i++)
    {   
        printf("Enter email %d: ",i+1);
        fgets( str[i], 30, stdin);
    }
    for ( i = 0; i < 10 ; i++)
        for ( j = 0 ; str[i][j] ; j++ )
            if (str[i][j] == '\n')
                str[i][j] = '\0';
    
    a = find(str);
    printf(" %d email ids belong to gmail.com",a);
    return 0;
}
//  Try strcmp
// if (strcmp(str + len - 10, "@gmail.com") == 0)