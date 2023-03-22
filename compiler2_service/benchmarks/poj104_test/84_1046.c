#include <header.h>

int main_bench()
{
    int a,b,c,d,e;
	int f[100];
    my_scanf("%d",&a);
    for (b=1;b<=a;b++)
	{
		my_scanf("%d",&f[b]);
        if (c<f[b])
		{
		    e=c;
			c=f[b];
            d=e;
		}
		if ((f[b]>d)&&(f[b]<c)) d=f[b];
	}
	my_printf("%d\n",c);
	my_printf("%d\n",d);
	return 0;
}