/*
Assignment : 32
Topic : Arrays and Functions
01||       Write a function to swap two elements of given array with specified indices.

*/
#include<stdio.h>
void array(int a[],int n)
{
    int temp,x,y;
    printf("Enter two indices: ");
    scanf("%d %d",&x,&y);
    {
        temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    printf("%d %d",a[x],a[y]);
}
int main()
{
    int a[100],n,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d Number: ",n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    array(a,n);
    return 0;
}