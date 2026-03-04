/*
Assignment : 02
01 ||       Write a program to calculate average of three integers.Numbers are given by the user.

*/
#include<stdio.h>
int main()
{    
    int a,b,c;
    double sum;
    printf("Enter three Numbers  ");
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("Average is %lf",sum/3);
}