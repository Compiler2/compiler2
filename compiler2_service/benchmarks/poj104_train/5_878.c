#define NUM_ITER 851422

#include <header.h>


int main_bench()
{
    double x,y;
    char a[501],b[501];
    int i,t=0,m=0,n=0,mark=1;
    my_scanf("%lf",&x);
    getchar();
    gets(a);
    gets(b);
    for(i=0;a[i];i++)
    {
        m=m+1;
        if(a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')
            mark=0;
    }
    for(i=0;b[i];i++)
    {
        n=n+1;
        if(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')
            mark=0;
    }
    if(m!=n||mark==0)
        my_printf("error");
    else
    {
        for(i=0;i<m;i++)
        {
            if(a[i]==b[i])
                t=t+1;
        }
        y=t/(double)m;
        if(y>=x)
            my_printf("yes");
        else
            my_printf("no");
    }
    return 0;
}
