/*
Assignment : 21
Topic : Functions
02||       Write a function to calculate Simple Intrest.(TSRS)

*/ 
#include<stdio.h>
float SI(float a,float b, float c)
{
    float s;
    s=(a*b*c)/100;
    return s;
}
int main()
{
    float p,r,t,I;
    printf("Enter Principle Amount, Rate, Time(in years): ");
    scanf("%f %f %f",&p,&r,&t);
    I=SI(p,r,t);
    printf("Simple Intrest = %lf",I);
    return 0;   
}