/*
Assignment : 16
Topic : Level up with loops
01||       Write a program to find the Nth term of the Fibonacci series.

*/
#include<stdio.h>
int main()
{
    int a=0,b=1,N,i,series;
    printf("Enter a Number: ");
    scanf("%d",&N);
    if (N==1)
        printf("%d",a);
    else if (N==2)
        printf("%d",b);
    else
        for ( i = 3; i <= N; i++)
        {
            series = a + b;
            a = b;
            b = series;
        }
    printf("%dth term = %d",N,series);
    return 0;
}