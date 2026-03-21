/*
Assignment : 16
Topic : Level up with loops
05||       Write a program to print all Armstrong number under 1000.

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,i,num;
    for (a = 1; a <= 1000; a++)
    {        
        b = a;
        num = 0;
        for ( i = 0; b > 0; i++)
        {
            b/=10;
        }
        b = a;
        while (b > 0)
        {
            c = b%10;
            num += pow(c,i); 
            b /= 10;
        }
        if (a == num)
            printf("%d ",a);        
    }
    return 0;
}