#include <header.h>


int main_bench()
{
    char *p[100];
    char *family[100];
    char *t,*s;
    gets(p);
    for (t=p,s=family;*(t+1)!='\0';t++,s++)
    {
        *s=*t+*(t+1);
    }
    *s=*t+*p;
    my_printf("%s",family);
}
