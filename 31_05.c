/*
Assignment : 31
Topic : Arrays and Functions
05||       Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of element.

*/
#include<stdio.h>
int duplicate(int a[], int n)
{
    int i,j;
    for ( i = 0; i < n-1; i++)
    {
        if (a[i] == a[i+1])
            break;
    }
    return a[i];
}
int main()
{
    int a[100],b,n,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d Numbers: ",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    b = duplicate(a,n);
    
        printf("Adjacent Duplicate Values = %d",b);
    return 0;
}