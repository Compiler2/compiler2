#define NUM_ITER 1536152

#include <header.h>


int main_bench()
{
    char *str[1000];
    char *p;
    int i;
    gets(str);
    for (p=str;*p!='\0';p++)
    {
        if (*p==' '&&*(p+1)==' ')
            continue;
        my_printf("%c",*p);
    }
   }