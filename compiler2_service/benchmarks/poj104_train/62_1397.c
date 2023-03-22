#define NUM_ITER 1309738

#include <header.h>


int main_bench()
{
    char *p,*q;
    int i,j,k=0;
    char a[10000];
    gets(a);
    p=a;
    for(i=0;i<strlen(a);i++)
    {if(*p!=' ')
    {my_printf("%c",*p);k=0;}
    if(*p==' '&&k==0)
    {my_printf(" ");
    k++;}
    p++;
    }
}