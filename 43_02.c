/*
Assignment : 43
Topic : Pointers
02||       Write a function to sort an array of int type values.[ void sort(int*ptr,int size);]

*/
#include<stdio.h>
void sort (int *p, int *q)
{
    int i,j,x;  
    for ( i = 0 ; i < *q ; i++)
        for ( j = i ; j < *q ; j++)
            if (p[i] > p[j])
            {
                x = p[i];
                p[i] = p[j];
                p[j] = x;
            }
}
int main()
{
    int array[100],n,i;
    printf("Enter length of Array: ");
    scanf("%d",&n);
    printf("Enter %d Numbers: ",n);
    for ( i = 0 ; i < n ; i++)
        scanf("%d",&array[i]);
    sort(array, &n);

    printf("After Sorting => ");
    for (i = 0 ; i < n ; i++)
        printf("%d ",array[i]);
    return 0;
}