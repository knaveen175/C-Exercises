/*
Assignment : 23
Topic : More on Functions
03||       Write a function to check whether a given number is prime or not.(TSRS)

*/ 
#include<stdio.h>
int check(int a)
{
    int i,j;
    for ( i = 2; i < a; i++)
    {
        if(j=(a % i == 0))
            break;
    }
    return j;
}
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=check(a);
    if (b==1)
        printf("Not a Prime Number");
    else
        printf("Prime Number");   
    return 0;
}