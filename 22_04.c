/*
Assignment : 22
Topic : Functions
04||       Write a function to check whether a given number contains a given digit or not.(TSRS)

*/ 
#include<stdio.h>
int check(int a, int b)
{
    int i,x,y;
    for ( i = 0; a > 0; i++)
    {
        x=a%10;
        if (y=(x==b))
            break;
        a/=10;
    }  
    return y;
}
int main()
{
    int a,b,c;
    printf("Enter a Number and a digit: ");
    scanf("%d %d",&a,&b);
    c=check(a,b);
    if (c==1)
        printf("Yes Given Digit is in the Number");
    else
        printf("No the given digit is not in the number");
    
}