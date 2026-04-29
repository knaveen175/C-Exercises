/*
Assignment : 40
Topic : Handling Multiple Strings
02||       Write a program to find the number of vowels in each of the 5 String stored in two dimensional arrays, taken from user.

*/
#include<stdio.h>
#include<string.h>
void check(char str[][50],char vowels[])
{
    int i,j,k,count;
    for (i = 0 ; i < 5 ; i++)
    {
        count = 0;
        for (j = 0 ; str[i][j] ; j++)
            for (k = 0 ; k < 10 ; k++)
                if(str[i][j] == vowels[k])
                    count ++;
        printf("Number of Vowels in String %d = %d\n",i+1,count);
    }
}
int main()
{
    char str[5][50], vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
    int i,j;
    for (i = 0 ; i < 5 ; i++)
    {
        printf("Enter String %d: ",i+1);
        fgets(str[i], 50, stdin);
    }
    for (i = 0 ; i < 5 ; i++)
        for (j = 0 ; j < 50 ; j++)
            if(str[i][j] == '\n')
                str[i][j] = '\0';

    check(str,vowels);
    return 0;
}