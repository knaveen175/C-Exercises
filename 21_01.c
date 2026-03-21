/*
Assignment : 21
Topic : Functions
01||       Write a function to calculate the area of a circle.(TSRS)

*/ 
#include<stdio.h>
float area(float r)
{
    float b;
    b = 3.14*r*r;
    return b;
}
int main()
{
    float a,f;
    printf("Enter radius of circle: ");
    scanf("%f",&a);
    f=area(a);
    printf("Area of circle = %lf",f);
    return 0;
}