#define NUM_ITER 1303360

#include <header.h>

int main_bench()
{
    int i,l;
    char s[4],r[4];
    my_scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
      r[i]=s[l-1-i];
    }
    for(i=0;i<l;i++)
    my_printf("%c",r[i]);
    getchar();
    getchar();
}