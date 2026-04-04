/*
Assignment : 31
Topic : Arrays and Functions
04||       Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.(For Example, if array of size 5 is[32,29,40,12,70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40,12,70,32,29]) (TSRN)

*/
#include<stdio.h>
void position(int a[], int n)
{
    int i,j,x,temp;
    char y;
    printf("Enter the value of rotation and direction(L / R): ");
    scanf("%d %c",&x,&y);
    if (y == 'L' || y == 'l')
    {
        for (j = 0; j < x; j++)
        {
            temp = 0;
            for ( i = 0; i < n-1; i++)
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        for( i = 0; i < n; i++)
            printf("%d ",a[i]);
    }
    else if (y == 'R' || y == 'r')
    {
        for ( j = 0; j < x; j++)
        {
            for ( i = n-1; i > 0; i--)
            {
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
            temp = 0;
        }
        for ( i = 0; i < n; i++)
            printf("%d ",a[i]);
    }   
}
int main()
{
    int a[100],n,i;
    printf("Enter size of Array: ");
    scanf("%d",&n);

    printf("Enter %d Numbers: ",n);
    for ( i = 0; i < n; i++)
        scanf("%d",&a[i]);
        
    position(a,n);
    return 0;
}