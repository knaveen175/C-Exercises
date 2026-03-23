/*
Assignment : 22
Topic : Functions
03||       Write a function to calculate the number of arrangements one can make from n items and r selected at a time.(TSRS)

*/ 
#include<stdio.h>
int arrangements(int x, int y)
{
    int p=1,q=1,i,j,z;
    for( i = 1; i <= x; i++)
    {
        p*=i;
    }
    for ( j = 1; j <= (x-y); j++)
    {
        q*=j;
    }
    z=p/q;
    return z;
}
int main()
{
    int n,r,a;
    printf("Enter total items(n) and no of selected items at a time(r): ");
    scanf("%d %d",&n,&r);
    a=arrangements(n,r);
    printf("nPr = %d",a);
    return 0;
}