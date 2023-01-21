#include<stdio.h>
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("Swapped values are:\n");
    printf("x=%d y=%d",x,y);
    return 0;
}
