/*
Assignment : 07
Topic : Decision Control Statements
05 ||       Write a program to check whether a given number is an even number or an odd number using a bitwise operator.

*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number");
    scanf("%d",&a);
    if(a & 1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}
/*
00000000 00000000 00000000 00000000
00000000 00000000 00000000 00000001
00000000 00000000 00000000 0000000



*/