/*
Assignment : 22
Topic : Functions
02||       Write a function to calculate the number of combinations one can make from n items and r selected at a time.(TSRS)

*/ 
#include<stdio.h>
int combinations(int x, int y)
{
    int p=1,q=1,r=1,i,j,k,z;
    for( i = 1; i <= x; i++)
    {
        p*=i;
    }
    for ( j = 1; j <= y; j++)
    {
        q*=j;
    }
    for ( k = 1; k <= (x-y); k++)
    {
        r*=k;
    }
    z=p/(q*r);
    return z;
}
int main()
{
    int n,r,a;
    printf("Enter total items(n) and no of selected items at a time(r): ");
    scanf("%d %d",&n,&r);
    a=combinations(n,r);
    printf("nCr = %d",a);
    return 0;
}