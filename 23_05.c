/*
Assignment : 23
Topic : More on Functions
05||       Write a function to print first N prime numbers.(TSRN)

*/ 
#include<stdio.h>
void first(int x)
{
    int a = 2, b = 0, y, i;

    while (b < x)
    {
        y = 1;  
        for (i = 2; i <= a / 2; i++)
        {
            if (a % i == 0)
            {
                y = 0;
                break;
            }
        }
        if (y == 1)
        {
            printf("%d ", a);
            b++;
        }
        a++;
    }
}

int main()
{
    int N,b;
    printf("Enter a number: ");
    scanf("%d",&N);
    printf("Prime Numbers = ");
    first(N);
    return 0;
}