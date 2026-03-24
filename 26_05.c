/*
Assignment : 26
Topic : Recursion
05||       Write a recursive function to print reverse of a given number.

*/ 
#include<stdio.h>
int reverse(int a)
{
    if (a==0)
        return 0;

    printf("%d",a % 10);
    reverse(a/10);
        return 0;
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a==0)
        printf("0");
    else
        reverse(a);
    return 0;
}