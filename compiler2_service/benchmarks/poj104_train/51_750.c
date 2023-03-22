#define NUM_ITER 896735

#include <header.h>

main_bench()
{
    int a,b,c,d,m,n;
    char x[510];
    int y[510]={0};
    my_scanf("%d",&n);
    my_scanf("%s",x);
    a=strlen(x)-1;
    for(b=0;b<=a-n+1;b++)
    {
        for(c=b;c<=a-n+1;c++)
        {
            for(d=0;d<=n-1;d++)
            {
                if(x[c+d]!=x[b+d])
                break;
                else;
            }
            if(d==n)
            y[b]++;
            else;
        }
    };
    m=y[0];
    for(b=0;b<=a-n+1;b++)
    {
        if(y[b]>m)
        m=y[b];
        else;
    }
    if(m==1)
    my_printf("NO");
    else
    {
        my_printf("%d\n",m);
        for(b=0;b<=a-n+1;b++)
        {
            if(y[b]==m)
            {
                for(c=0;c<=n-1;c++)
                my_printf("%c",x[b+c]);
                my_printf("\n");
            }
        }
    }
}