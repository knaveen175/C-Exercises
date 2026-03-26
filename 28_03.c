/*
Assignment : 28
Topic : More on Recursion
03||       Write a recursive function to print first N terms of Fibonacci series.

*/ 
#include<stdio.h>
void fibonacci(int m, int n, int p)
{
    int x;
    if (p==0)
        return ;
    x = m + n;
    printf("%d ",x);    
    
    fibonacci(n, x, p-1);
}
int main()
{ 
    int a,b;
    printf("Enter Number of terms: ");
    scanf("%d",&a);
    if (a >= 0)
        printf("0 ");
    if (a >= 1)
        printf("1 ");

    fibonacci(0,1,a-2);
    return 0;
}