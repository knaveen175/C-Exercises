/*
Assignment : 22
Topic : Functions
05||       Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2,2,3,3. (TSRN)

*/ 
#include<stdio.h>
void factors(int a)
{
    int i;
    for ( i = 2; i <= a; i++)
    {
        while (a % i == 0)
        {
            printf("%d ",i);
            a /= i;
        }
    }
}
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    printf("Prime Factors: ");
    factors(a);
    return 0;
}