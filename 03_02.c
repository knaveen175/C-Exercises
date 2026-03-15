/*
Assignment : 03
Topic : printf and scanf
02 ||       Write a program to input an ASCII Code from the user and print its corresponding character. 

*/
#include<stdio.h>
int main()
{
    char x;
    printf("Enter any ASCII Code  ");
    scanf("%d",&x);
    printf("%c",x);
    return 0;
}