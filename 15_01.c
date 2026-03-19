/*
Assignment : 15
Topic : Level up with loops
01||       Write a program to print all Prime numbers under 100.

*/
#include<stdio.h>
int main()
{
    int i,n,k;
    for (n=2; n<=100; n++)
    {
        for (i = 2; i < n; i++)
        {
            if (k=(n%i==0))
                break;  
        }
        if(k==0)
        printf("%d ",n);
    }
    return 0;
}