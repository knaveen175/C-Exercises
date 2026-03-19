/*
Assignment : 15
Topic : Level up with loops
05||       Write a program to check whether two given numbers are coprime numbers or not.

*/
#include<stdio.h>
int main()
{
    int a,b,i,j;
    printf("Enter two numbers- ");
    scanf("%d %d",&a,&b);
    if(a>b)
        {   for ( i = 2; i < b; i++)    
            {
                if (j=(a%i==0 && b%i==0))
                    break;
            }
            if (j==0)
                printf("Coprime Numbers");
            else
                printf("Not Coprime Numbers");
        }        
    if(a<b)
        {
            for ( i = 2; i < a; i++)    
            {
                if (j=(a%i==0 && b%i==0))
                    break;
            }
            if (j==0)
                printf("Coprime Numbers");
            else
                printf("Not Coprime Numbers");
        }        
    return 0; 
}