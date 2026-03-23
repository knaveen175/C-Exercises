/*
Assignment : 22
Topic : Functions
01||       Write a function to calculate the factorial of a number.(TSRS)

*/
#include<stdio.h>
int factorial (int a)
{
    int i,x=1;
    for ( i = 1; i <= a; i++)
    {
        x *= i;
    }
    return x;
}
int main()
{
    int a,b;
    printf("Enter a Number: ");
    scanf("%d",&a);
    b=factorial(a);
    printf("Factorial = %d ",b);
    return 0;
}