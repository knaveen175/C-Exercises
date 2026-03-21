/*
Assignment : 21
Topic : Functions
04||       Write a program to print first N Natural Numbers.(TSRN)

*/ 
#include<stdio.h>
void check(int x)
{
    int i;
    for ( i = 1; i <= x; i++)
        printf("%d ",i);
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    check(a);
    return 0;
}