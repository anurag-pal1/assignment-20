#include<stdio.h>
void sort(int *p,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
       for(j=i+1;j<=size;j++)
       {
          if(p[i]<p[j])
          {
              temp=p[i];
              p[i]=p[j];
              p[j]=temp;
          }
       }
    }
}
int main()
{
    int n,i;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d numbers:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
     return 0;
}
