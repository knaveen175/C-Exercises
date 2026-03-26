/*
Assignment : 28
Topic : More on Recursion
05||       Write a program in C to calculate the power of any number using recursion.

*/ 
#include<stdio.h>
#include<math.h>
int power(int m, int n)
{
    int x;
    if (n==0)
        return 1;
    x = m * pow(m,n-1);
    return x;
}
int main()
{ 
    int a,b,c;
    printf("Enter two Number: ");
    scanf("%d %d",&a,&b);
    c = power(a,b);
    printf("power = %d ",c);
    return 0;
}