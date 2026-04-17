/*
Assignment : 37
Topic : String and Functions
01||       Write a function to swap two characters of a given string with specified indices.

*/
#include<stdio.h>
#include<string.h>
void swap(char str[])
{
    int l,a,b;
    char temp;
    printf("Enter two indices: ");
    scanf("%d %d",&a,&b);

    l = strlen(str);
    if (b >= l)
        b = l;
    if (a < 0)
        a = 0;   
    
    temp = str[a];
    str[a] = str[b];
    str[b] = temp;

}
int main()
{   
    char str[100];
    int l;
    printf("Enter a string: ");
    fgets ( str, 100, stdin);

    l = strlen(str);
    if ( str[ l - 1 ] == '\n')
        str[ l - 1 ] = '\0';

    swap(str);
    printf("%s",str);
    return 0;
}