/*
Assignment : 42
Topic : Pointers
01||       Write a function to swap values of two int variables.(TSRN) 

*/
#include<stdio.h>
void swap(int *p, int *q)
{
    int c;
    c = *p;
    *p = *q;
    *q = c;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("You entered a = %d, b = %d",a,b);
    swap(&a,&b);
    printf("\nAfter Swapping a = %d, b = %d",a,b);
    return 0;
}