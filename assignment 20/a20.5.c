#include<stdio.h>
void greatest(int *x,int *y)
{
    int *ans;
    if(*x>*y)
    {
        *x=*x;
    }
    else
    {
        *x=*y;
    }
}
int main()
{
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d",&x,&y);
    greatest(&x,&y);
    printf("Greatest number is %d",x);
    return 0;
}
