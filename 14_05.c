/*
Assignment : 14
Topic : Use any loop
05||       Write a program to reverse a given number.

*/
#include<stdio.h>
int main()
{
    int a,b,num=0;
    printf("Enter a Number- ");
    scanf("%d",&a);
    while ( a != 0)
    {
        b=a%10;
        num=num*10 + b;
        a/=10;
    }
    printf("%d",num);
    return 0;
}