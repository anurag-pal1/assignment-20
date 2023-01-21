#include<stdio.h>
void fun(char *str_ptr,int *vow,int *cons)
{
    int i;
    *vow=0;
    *cons=0;
    for(i=0;str_ptr[i] != '\0';i++)
    {
        if(str_ptr[i]=='a'||str_ptr[i]=='e'||str_ptr[i]=='i'||str_ptr[i]=='o'||str_ptr[i]=='u')
        {
            *vow=*vow+1;
        }
        else
            *cons=*cons+1;
    }
}
int main()
{
    char str[100];
    int vow;
    int cons;
    printf("Enter a string:\n");
    gets(str);
    fun(&str,&vow,&cons);
    printf("No. of vowels=%d\n No. of consonants=%d",vow,cons);
    return 0;
}
