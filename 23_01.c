/*
Assignment : 23
Topic : More on Functions
01||       Write a function to calculate LCM of two numbers.(TSRS)

*/ 
#include<stdio.h>
int LCM(int x, int y)
{
    int i;
    for ( i = 1; ; i++)
    {
        if(i % x == 0 && i % y == 0)
            return i;
    }   
}
int main()
{
    int a,b,c;  
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    c = LCM(a, b);
    printf("LCM = %d",c);
    return 0;
}