/*
Assignment : 02
Topic : printf and scanf
02 ||       Write a program to calculate circumference of circle.

*/
#include<stdio.h>
int main()
{
    float r;
    printf("Enter radius of circle  ");
    scanf("%f",&r);
    printf("Circumference is %lf",2*3.14*r);
}