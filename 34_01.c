/*
Assignment : 34
Topic : String Basics
01||       Write a program to calculate the length of the string. (without using builtin method)

*/
#include<stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter your name: ");
    fgets( str , 30 , stdin );
    for ( i = 0; str[i] ; i++);   
    if (str[i-1] = '\n')
        str[i-1] = '\0';
    printf("Length of %s is %d",str,i);
    return 0;
}