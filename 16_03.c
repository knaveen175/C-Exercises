/*
Assignment : 16
Topic : Level up with loops
03||       Write a program to check whether a given number is there in Fibonacci series or not.

*/
#include<stdio.h>
int main()
{
    int a=0,b=1,N,i,series;
    printf("Enter a Number: ");
    scanf("%d",&N);
    for ( i = 3; (a+b)<=N ; i++)
        {
            series = a + b;
            a = b;
            b = series;
        }
    if (N==0 || N== 1 || N==series)
        printf("Yes! Given Number is there in Fibonacci series");
    else 
        printf("Given Number is not in Fibonacci series");
    return 0;
}