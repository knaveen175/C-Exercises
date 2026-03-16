/*
Assignment : 08
Topic : Decision Control Statements
02 ||       Write a program to print greater between two numbers.Print one if both numbers are same.

*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers  ");
    scanf("%d %d",&a,&b);
    if (a>=b)
        printf("Greatest number is %d ",a);
    else
        printf("Greatest number is %d ",b);
    return 0;    
}
