/*
Assignment : 21
Topic : Functions
05||       Write a program to print first N odd Natural Numbers.(TSRN)

*/ 
#include<stdio.h>
void check(int x)
{
    int i;
    for ( i = 1; i <= x; i++)
        printf("%d ",2*i-1);
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    check(a);
    return 0;
}