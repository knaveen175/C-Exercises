/*
Assignment : 15
Topic : Level up with loops
02||       Write a program to print all Prime numbers between two given numbers.

*/
#include<stdio.h>
int main()
{
    int a,b,i,j,k;
    printf("Enter two numbers- ");
    scanf("%d %d",&a,&b);
    if (b>a)
    {
        for ( j = a; j <= b; j++)
        {
            for (i = 2; i < a; i++)
            {
                if(k=(j%i==0))
                    break;
            }
         if (k==0)
            printf("%d ",j); 
        }   
    }
    else
    {
        for ( j = b; j <= a; j++)
        {
            for (i = 2; i < b; i++)
            {
                if(k=(j%i==0))
                    break;
            }
         if (k==0)
            printf("%d ",j); 
        }   
    }
    

}