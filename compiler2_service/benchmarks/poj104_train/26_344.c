#define NUM_ITER 604514

#include <header.h>

int main_bench()
{
    char *p,*p0,*q;
    p0=p=(char *)malloc(100*sizeof(char));
    q=(char *)malloc(100*sizeof(char));
    gets(p);
    for(p=p0;*p!='\0';p++)
    {
        if(*p!=' ')my_printf("%c",*p);
        else for(q=p;*q!='\0';q++)
            if(*q!=' ')
            {
                p=q-1;
                my_printf(" ");
                break;
            }
    }
}