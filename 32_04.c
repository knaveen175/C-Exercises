/*
Assignment : 32
Topic : Arrays and Functions
04||       Write a function to merge two array of same size sorted in descending order.

*/
#include<stdio.h>
void Arrays(int a[], int x, int b[], int y)
{
    int i,j,temp,z,c[200];
    z = x + y;
    for ( i = 0; i < x; i++)
        c[i] = a[i];
    for ( i = 0; i < y; i++)
        c[x + i] = b[i];
    
    for ( i = 0; i < z-1; i++)
    {
        for ( j = 0; j < z-i-1; j++)
        {
            if (c[j] < c[j + 1])
            {
                temp = c[j];
                c[j] = c[j+1];
                c[j+1] = temp;
            }
        }
    }
    for ( i = 0; i < z; i++)
        printf("%d ",c[i]);
    
}
int main()
{
    int a[100],b[100],i,x,y;
    printf("Enter size of 1st Array: ");
    scanf("%d",&x);
    printf("Enter elements of 1st Array: ");
        for ( i = 0; i < x; i++)
            scanf("%d",&a[i]);

    printf("Enter size of 2nd Array: ");
    scanf("%d",&y);
    printf("Enter elements of 2nd Array: ");
        for ( i = 0; i < y; i++)
            scanf("%d",&b[i]);
    
    Arrays(a,x,b,y);
    return 0;   
}