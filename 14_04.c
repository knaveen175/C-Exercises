/*
Assignment : 14
Topic : Use any loop
04||       Write a program to calculate LCM of two numbers.

*/
#include<stdio.h>
int main()
{
    int a,b,i,c;
    printf("Enter two numbers- ");
    scanf("%d %d",&a,&b);
    for ( i = 1; ; i++)
    {   
    if (i%a==0 && i%b==0)
        break;
    }    
    printf("LCM = %d",i);
    return 0;
}