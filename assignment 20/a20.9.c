#include<stdio.h>
void reverse(int *p,int *q,int size)
{
    int i,j=0;
    for(i=size-1;i>=0;i--)
    {
        q[j]=p[i];
        j++;
    }
}
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    int b[n];
    printf("Enter %d numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,b,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
