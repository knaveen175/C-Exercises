/*
Assignment : 16
Topic : Level up with loops
02||       Write a program to print first N terms of Fibonacci series.

*/
#include<stdio.h>
int main()
{
    int a=0,b=1,i,N,series;
    printf("Enter a Number: ");
    scanf("%d",&N);
        if (N==1)
            printf("%d",a);
        else if (N==2)
            printf("%d %d",a,b);
        else if (N >=3)
        {
            printf("%d %d ",a,b);
            for ( i = 3; i <= N; i++)
            {
                series = a + b;
                a = b;
                b = series;
                printf("%d ",series);
            }
        }
    return 0;
}