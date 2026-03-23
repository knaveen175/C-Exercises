/*
Assignment : 23
Topic : More on Functions
04||       Write a function to find the next prime number of a given number.(TSRS)

*/ 
#include<stdio.h>
int next(int a)
{
    int i,j,k;
    for (j = a; ; j++)
    {    for ( i = 2; i < j; i++)
        {
            if(k=(j % i == 0))
                break;
        }
        if (k!=1)
            return j;
    }
}
int main()
{
    int a,b;
    printf("Enter a number: ");
    scanf("%d",&a);
    b=next(a);
    printf("Next Prime Number = %d",b);
    return 0;
}