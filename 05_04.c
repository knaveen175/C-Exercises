/*
Assignment : 05
Topic : More on Operators in C Language
04 ||       Write a program to make the last digit of a number stored in a variable as zero.(Example- if x=2345 then make it x=2340)

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number- ");
    scanf("%d",&a);
    a/=10, a*=10;
    printf("%d",a);
    return 0;
}