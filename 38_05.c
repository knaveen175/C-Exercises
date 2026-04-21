/*
Assignment : 38
Topic : String and Functions
05||       Write a function to do case insensitive comparison of two strings.

*/
#include<stdio.h>
#include<string.h>
int comparison(char str1[], char str2[])
{
    int i,l1,l2;
    char j,J;
    l1 = strlen(str1);
    if (str1[l1-1] == '\n')
        str1[l1-1] = '\0';
    l2 = strlen(str2);
    if (str2[l2-1] == '\n')
        str2[l2-1] = '\0';
    if (l1 != l2)
        return 0;
        
    for ( i = 0; i < (l1 - 1); i++ )
    {
        if ( str1[i] >= 'A' && str1[i] <= 'Z')
            for ( j = 'A'; j <= 'Z'; j++)
                if (str1[i] == j)
                    if (str2[i] != j || str2[i] != j + 32)
                        return 0;

        if ( str1[i] >= 'a' && str1[i] <= 'z')
            for ( J = 'z'; J <= 'z'; J++) 
                if (str1[i] == J)
                    if (str2[i] != J || str2[i] != J - 32)
                        return 0;
    }
    return 1;
}
int main()
{
    char str1[100], str2[100];
    int a;
    printf("Enter 1st String: ");
    fgets( str1, 100, stdin);
    printf("Enter 2nd String: ");
    fgets( str2, 100, stdin);
    a = comparison (str1, str2);
    if ( a != 0)
        printf("Both Strings are Equal");
    else
        printf("Not Equal");
    return 0;
}