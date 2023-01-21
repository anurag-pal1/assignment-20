#include<stdio.h>
#include<string.h>
void reverse(char *str_ptr,char *str_ptr2,int l)
{
    int i,j=0;
    for(i=l-1;i>=0;i--)
    {
        str_ptr2[j]=str_ptr[i];
        j++;
    }
    str_ptr2[j]='\0';
}
int main()
{
    int l;
    char str[100];
    char b[100];
    printf("Enter a string:\n");
    gets(str);
    l=strlen(str);
    reverse(&str,&b,l);
    printf("Reverse string is %s",b);
    return 0;
}
