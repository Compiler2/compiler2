#include <header.h>

int main_bench()
{
    char *p,*p0;
    p0=p=(char *)malloc(100*sizeof(char));
    gets(p);
    for(p=p0;*p!='\0';p++)
    {
        if(*p!=' ')my_printf("%c",*p);
        else for(;*p!='\0';p++)
            if(*p!=' ')
            {
                p--;
                my_printf(" ");
                break;
            }
    }
}