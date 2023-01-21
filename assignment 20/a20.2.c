#include<stdio.h>
#include<string.h>
void swap(char **str1_ptr,char **str2_ptr)
{
    char *temp=*str1_ptr;
    *str1_ptr=*str2_ptr;
    *str2_ptr=temp;

}
int main()
{
     char *str1[20];
     char *str2[20];
     printf("Enter a string:\n");
     gets(str1);
     printf("Enter second string:\n");
     gets(str2);
     swap(&str1,&str2);
     printf("Swapped strings are:\n");
     printf("str1= %s str2= %s",str1,str2);
     return 0;
}

