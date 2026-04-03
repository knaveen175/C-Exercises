/*
Assignment : 31
Topic : Arrays and Functions
03||       Write a function to sort any array of any size. (TSRN)

*/
#include<stdio.h>
void sort(int a[], int n)
{
    int i,j,min,temp;
    
    for(j = 0; j < n-1; j++)
    {    
        min = j;
        for(i = j+1; i < n; i++)
        {
            if (a[i] < a[min])
                min = i;
        }
        if (min != j)
        {
            temp = a[j];
            a[j] = a[min];
            a[min] = temp;
        }
    }
}
int main()
{
    int a[100],i,n;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d numbers: ",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);

    sort(a,n);
    printf("Sorted Array: ");
    for ( i = 0; i < n; i++)
        printf("%d ",a[i]);
    return 0;
}