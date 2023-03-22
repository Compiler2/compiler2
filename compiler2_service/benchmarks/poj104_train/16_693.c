#define NUM_ITER 951642

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,g,h,i,j,k;
    my_scanf("%d",&a);
    b=a/10000;
    c=a/1000;
    d=a/100;
    e=a/10;
    f=a%10;
    g=e%10;
    h=d%10;
    i=(a/10)%10;
    j=(a/100)%10;
    k=(a/1000)%10;
    if(b==0)
	{
		if(c==0)
        {
			if(d==0)
            {
				if(e==0)
                {
					my_printf("%d",f);
                }
                else
                my_printf("%d%d",f,e);
            }
            else
            my_printf("%d%d%d",f,g,d);
        }
        else
			my_printf("%d%d%d%d",f,i,h,c);
    }
    else
    my_printf("%d%d%d%d%d",f,i,j,k,b);
    return 0;
}