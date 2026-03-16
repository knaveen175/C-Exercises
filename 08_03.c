/*
Assignment : 08
Topic : Decision Control Statements
03 ||       Write a program to check whether roots of a quadratic equation are real & distinct,real and equal or imaginary roots.

*/
#include<stdio.h>
int main()
{
    int a,b,c,D;
    printf("Enter the values of a,b,c for the quadratic equation ax^2 + bx +c =0,Give Values-");
    scanf("%d %d %d",&a,&b,&c);
    D=b*b - 4*a*c;
    if (D>0)
        printf("Real and Distinct roots");
    else if (D<0)
        printf("Imaginary roots");
    else
        printf("Real and Equal roots");
    return 0;
}