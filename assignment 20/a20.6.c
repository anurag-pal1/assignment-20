#include<stdio.h>
int main()
{
    char str[20];
    printf("Enter a string:\n");
    gets(str);
    char *p;
    p=str;
    int i,len=0;
    for(i=0;p[i] != '\0';i++)
    {
        len++;
    }
    printf("Length of string is %d",len);
    return 0;
}
