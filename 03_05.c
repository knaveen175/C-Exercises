/*
Assignment : 03
Topic : printf and scanf
05 ||       Write a program to print a given number without its last digit.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number - ");
    scanf("%d",&a);
    printf("Given number without last digit = %d",a/10);
    return 0;
}