/*
Assignment : 46
Topic : DMA
04||       Write a function to merge two array elements and store it in dynamically created array. Return address of this dynamically created array.

*/
#include<stdio.h>
#include<stdlib.h>
int *dynamic(int *p, int *q, int *r, int *s)
{
    int *a, i, j;
    a = (int*) malloc (*r + *s);
    for ( i = 0, j = 0; i < *r ; i++, j++)  
        a[i] = p[j];
    for ( i = *r, j = 0; i < *r + *s ; i++, j++)  
        a[i] = q[j];
    return a;
}
int main()
{
    int a, b, i ,*p;
    printf("Enter the number of data you wanna store in 1st Array: ");
    scanf("%d",&a);
    int x[a];
    printf("Enter the data of 1st Array: ");
    for ( i = 0; i < a; i++)
        scanf("%d",&x[i]);
    printf("Enter the number of data you wanna store in 2nd Array: ");
    scanf("%d",&b);
    int y[b];
    printf("Enter the data of 2nd Array: ");
    for ( i = 0; i < b; i++)
        scanf("%d",&y[i]);
    p = dynamic(x, y, &a, &b);
    printf("New Array => ");
    for (i = 0 ; i < a+b ; i++) 
        printf("%d ",p[i]);
    free(p);
    return 0;
}