/*
Assignment : 21
Topic : Functions
03||       Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.(TSRS)

*/ 
#include<stdio.h>
int check(int x)
{
    int y;
    if(x%2==0)
        y=1;
    else
        y=0;
    return y;
}
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=check(a);
    if (b==1)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;    
}