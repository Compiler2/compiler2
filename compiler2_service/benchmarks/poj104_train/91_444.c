#define NUM_ITER 1112155

#include <header.h>

int main_bench()
{
    char str[1000],*p,*p1=str;
    int m,i;
    gets(str);
    m=strlen(str)-1;
    for(i=0;i<strlen(str)-1;i++)
    {
      p=&str[i];
      my_printf("%c",*p+*(p+1));
    }
    p=&str[m];
    my_printf("%c",*p+*p1);
    return 0;
}