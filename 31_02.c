/*
Assignment : 31
Topic : Arrays and Functions
02||       Write a function to find the smallest number from the given array of any size.(TSRS)

*/
#include<stdio.h>
int smallest(int a[], int n)
{
    int min,i;
    min = a[0];
    for(i = 0; i < n; i++)
    {
        if (min > a[i])
        min = a[i];
    }
    
    return min;
}
int main()
{
    int a[100],b,i,n;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    b=smallest(a, n);
    printf("Smallest Number = %d",b);
    return 0;
}