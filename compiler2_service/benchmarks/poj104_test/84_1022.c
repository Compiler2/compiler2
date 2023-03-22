#define NUM_ITER 60878

#include <header.h>

int main_bench()
{
    int n,i,a,max,imax;
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        switch(i)
        {
            case 1: my_scanf("%d",&imax); break;
            case 2: my_scanf("%d",&a);
                    if(a>imax)
                    {
                        max=imax;
                        a=imax;
                    }
                    else max=a;
                    break;
            default:my_scanf("%d",&a);
                    if(a>=imax)
                    {
                        max=imax;
                        imax=a;
                    }
                    else if(a<imax&&a>=max)
                    {
                        max=a;
                    }
        }
    }
    my_printf("%d\n%d\n",imax,max);
    return 0;
}
