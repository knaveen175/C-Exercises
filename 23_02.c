/*
Assignment : 23
Topic : More on Functions
02||       Write a function to calculate HCF of two numbers.(TSRS)

*/ 
#include<stdio.h>
int HCF(int x, int y)
{
    int i;
    if(x>y)
    {    for ( i = y; i >= 1; i--)
        {
            if(x % i == 0 && y % i == 0)
                return i;
        }
    }
    else if (y>x)
    {
        for ( i = x; i >= 1; i--)
        {
            if(x % i == 0 && y % i == 0)
                return i;
        }
    }
    else if (x==y)
    {
        return 1;
    }
    
}   
int main()
{
    int a,b,c=0;  
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c = HCF(a, b);
    printf("HCF = %d",c);
    return 0;
}