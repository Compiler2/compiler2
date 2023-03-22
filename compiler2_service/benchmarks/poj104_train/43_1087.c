#include <header.h>

int main_bench()
{
    int m,i,a,b,c,d,e;
    my_scanf("%d",&m);
    a=m/2;
    for(i=3;i<=a;i++)
    {
        for(b=2;b<i;b++)
        {
            c=i%b;
            if(c==0)
            {b=i;}
        }
        if(c==0)
        {continue;}
        else
        {
            d=m-i;
            for(b=2;b<d;b++)
        {
            c=d%b;
            if(c==0)
            {b=d;}
        }
        }
        if(c!=0)
        {my_printf("%d %d\n",i,d);}
        }
        return 0;
}

