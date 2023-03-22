#include <header.h>

int main_bench()
{
    struct dc
    {
           char a[100];
           int len;
    }dc[200],*ps;
    ps=dc;
    int n,max=0,min=500,i;
    char *pmax,*pmin;
    my_scanf("%d",&n);
    for(i=0;i<n;i++,ps++)
    {
                    my_scanf("%s",ps->a);
                    ps->len=strlen(ps->a);
                    if(ps->len>max)
                    {
                                    max=ps->len;
                                    pmax=ps->a;
                    }
                    if(ps->len<min)
                    {
                                    min=ps->len;
                                    pmin=ps->a;
                    }
    }
    my_printf("%s\n%s",pmax,pmin);
    return 0; 
}