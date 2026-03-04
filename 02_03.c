/*
Assignment : 02
03 ||       Write a program to calculate simple intrest.

*/
#include<stdio.h>
int main()
{
    float p,r,t;
    printf("Enter Principal Amount, Rate, Time(in years) respectively  ");
    scanf("%f %f %f", &p,&r,&t);
    printf("Simple Intrest = %lf", (p*r*t)/100);
}