/*
Assignment : 15
Topic : Level up with loops
04||       Write a program to calculate HCF of two number.

*/
#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter two Number- ");
    scanf("%d %d",&a,&b);
    if(a>b)
    {    
        for ( i = b; i>0 ; i--)
        {
            if (a%i==0 && b%i==0)
                break;
        }
        printf("%d",i);
    }
    else
    {    
        for ( i = a; i>0 ; i--)
        {
            if (a%i==0 && b%i==0)
                break;
        }
        printf("%d",i);
    }

}