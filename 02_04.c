/*
Assignment : 02
Topic : printf and scanf
04 ||       Write a program to volume of cuboid.

*/
#include<stdio.h>
int main()
{
    int l,b,h;
    printf("Enter Length, Breadth and Height respectively  ");
    scanf("%d %d %d", &l,&b,&h);
    printf("Volume = %d", l*b*h);
}