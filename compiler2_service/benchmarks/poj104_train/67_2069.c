#include <header.h>

int main_bench()
{
    int m,w;
    double v[2];
    double p[2];
    double v0,p0,c;
    my_scanf("%d",&m);
    my_scanf("%lf %lf",v,v+1);
    v0=v[1]/v[0];
    m--;
    for(w=0;w<m;w++)
    {
        my_scanf("%lf %lf",p,p+1);
        p0=p[1]/p[0];
        c=p0-v0;
        if(c>0.05)
        my_printf("better\n");
        else
        {
            if(c<-0.05)
            my_printf("worse\n");
            else
            my_printf("same\n");
        }
    }
    return 0;
}
