/*
Assignment : 15
Topic : Level up with loops
03||       Write a program to find next Prime number of a given number.

*/
#include<stdio.h>
int main()
{
    int a,i,j,k;
    printf("Enter a Number- ");
    scanf("%d",&a);
        for( j = a; ; j++)
        {    
            for ( i = 2; i < j; i++)
            {
                if (k=(j%i==0))
                    break;
            }
            if (k==0)
            {
                printf("%d",j);
                break;
            }
        }
    return 0;
}