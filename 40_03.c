/*
Assignment : 40
Topic : Handling Multiple Strings
02||       Write a program to sort 10 city names stored in two dimensional array, taken from the user.

*/
#include<stdio.h>
#include<string.h>
void check(char str[][30])
{
    int i,j,k;
    char temp[30];
    for ( i = 0 ; i < 9 ; i++)
        for (j = i+1 ; j < 10 ; j++)
            if (strcmp(str[i],str[j]) > 0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);        
                strcpy(str[j], temp);
            }
}
int main()
{
    char str[10][30];
    int i,j;
    for (i = 0 ; i < 10 ; i++)
    {
        printf("Enter City %d: ",i+1);
        fgets(str[i], 30, stdin);
    }

    for (i = 0 ; i < 10 ; i++)
        for (j = 0 ; j < 30 ; j++)
            if(str[i][j] == '\n')
                str[i][j] = '\0';

    check(str);
    printf("Sorted Cities Name :");
    for ( i = 0; i < 10; i++)
        printf("%s ",str[i]);
    return 0;
}