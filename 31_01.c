/*
Assignment : 31
Topic : Arrays and Functions
01||       Write a function to find the greatest number from the given array of any size.(TSRS)

*/
#include<stdio.h>
int greatest(int a[], int n)
{
    int i, max;
    max = a[0];

    for ( i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}
int main()
{ 
    int a[10],i,b,n;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);
    for ( i = 0; i < n; i++)    
        scanf("%d", &a[i]); 
    b = greatest (a, n);
    printf("Greatest Number = %d",b);
    return 0;
}
