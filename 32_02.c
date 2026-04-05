/*
Assignment : 32
Topic : Arrays and Functions
02||       Write a function to count a total number of duplicate elements in an array.(Means elements that occurs 2 times in an array)

*/
#include<stdio.h>
int duplicate (int a[], int n)
{
    int i,j,count = 0;
    for (j = 0; j < n; j++)
    {    
        for ( i = j+1; i < n; i++)
        {
            if (a[i] == a[j])
                count ++;
        }
    }
    return count;
}
int main()
{
    int a[100],n,b,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d Number",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
    b = duplicate(a,n);
    printf("Total Number of Duplicate elements = %d ",b + 1);
    return 0;
}