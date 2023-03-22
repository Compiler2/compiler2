#include <header.h>

int main_bench()
{
    int z[1001];
	int a,n;
	z[1]=1;
	z[2]=1;
    my_scanf("%d",&n);
	for(a=1;a<=998;a++)
	{
		z[a+2]=z[a+1]+z[a];
	}
	for(a=1;a<=n;a++)
	{
		my_scanf("%d",&z[0]);
		my_printf("%d\n",z[z[0]]);
	}
	return 0;
}
