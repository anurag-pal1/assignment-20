#include<stdio.h>
void sum(int *p,int size,int *s)
{
    int i;
    *s=0;
    for(i=0;i<size;i++)
    {
        *s=*s+p[i];
    }
}
int main()
{
    int n,i,s;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum(arr,n,&s);
    printf("Sum of elements in given array is %d",s);
    return 0;
}
