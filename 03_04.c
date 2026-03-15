/*
Assignment : 03
Topic : printf and scanf
04 ||       Write a program to print last digit of a given number.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number - ");
    scanf("%d",&a);
    printf("Last Digit of given number = %d",a%10);
    return 0;
}