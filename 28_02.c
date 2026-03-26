/*
Assignment : 28
Topic : More on Recursion
02||       Write a recursive function to calculate HCF of two numbers.

*/ 
#include<stdio.h>
int HCF(int a, int b)
{
    int x;
    if (b==0)
        return a;

    x = HCF(b, a % b);
        return x;
}
int main()
{
    int a,b,c;
    printf("Enter two Number: ");
    scanf("%d %d",&a,&b);
    c = HCF(a,b);
    printf("HCF = %d ",c);
    return 0;
}