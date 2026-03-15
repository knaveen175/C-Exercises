/*
Assignment : 06
Topic : More on Operators in C Language
01 ||       Assume price of 1 USD is INR 84.23. Write a program to take the amount in INR and convert it into USD.

*/
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the amount in INR- ");
    scanf("%f",&a);
    printf("The amount %f INR in USD is %lf $",a,a/84.23);
    return 0;
}