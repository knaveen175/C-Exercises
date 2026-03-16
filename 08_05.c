/*
Assignment : 08
Topic : Decision Control Statements
05 ||       Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number- ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
        printf("Greatest Number is %d",a);
    else if (b>=c && b>=a)
        printf("Greatest number is %d",b);
    else
        printf("Greatest number is %d",c);   
    return 0;
}