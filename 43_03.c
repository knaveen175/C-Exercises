/*
Assignment : 43
Topic : Pointers
03||       Write a function to merge two arrays in a given array.[void merge(int *arr1, int size1, int *arr2, int size2, int *arr3);]

*/
#include<stdio.h>
void merge(int *p, int *q, int *r, int *m, int *n)
{
    int i,j=0;
    for ( i = 0 ; i < *m ; i++)
        r[i] = p[i];
    for ( i ; j < *n ; i++,j++)
        r[i] = q[j];
}
int main()
{
    int a[100], m, n, b[100],i,x[200];
    printf("Enter size of 1st Array: ");
    scanf("%d",&m);
    printf("Enter 1st Array: ");
    for ( i = 0 ; i < m ; i++)
        scanf("%d",&a[i]);
    printf("Enter size of 2nd Array: ");
    scanf("%d",&n);
    printf("Enter 2nd Array: ");
    for ( i = 0 ; i < n ; i++)
        scanf("%d",&b[i]);

    merge(a, b, x, &m, &n);
    printf("New Merged Array = ");
    for ( i = 0 ; i < m+n ; i++)
        printf("%d ",x[i]);
    return 0;
}