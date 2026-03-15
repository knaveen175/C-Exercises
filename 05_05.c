/*
Assignment : 05
Topic : More on Operators in C Language
05 ||       Write a program to input a number from the user and also input a digit.Append a digit in the number and print the resulting number.(Example- number=234 and digit=9 then the resulting number is 2349)

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a Number and a Digit respectively- ");
    scanf("%d %d",&a,&b);
    a=a*10,a+=b;
    printf("%d",a);
    return 0;
}