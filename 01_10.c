/*
Assignment : 01
Topic : Input and Output
10 ||       Write a program to find the area of circle.Take radius of circle from user as input.

*/
#include<stdio.h>
int main()
{    
    float r;
    printf("Enter Radius of Circle  ");
    scanf("%f",&r);
    printf("Area of Circle is %lf",3.14*r*r);
}