/*
Assignment : 32
Topic : Arrays and Functions
03||       Write a function to print all unique elements in an array.

*/
#include<stdio.h>
int unique(int a[], int n)
{
    int i,j,count;
    for (j = 0; j < n; j++)
    {
        count = 0;
        for ( i = 0; i < n; i++)
        {
            if ((a[i] == a[j]))
                count++; 
        }
        if (count == 1)
            printf("%d ",a[j]);
    }
}
int main()
{
    int a[100],n,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d Number: ",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    printf("Unique Elements: ");
    unique(a,n);
    return 0;
}