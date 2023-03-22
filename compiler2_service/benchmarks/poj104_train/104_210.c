#define NUM_ITER 713280

#include <header.h>

int main_bench()
{
	int i,j,x[10],y[10],a,b;
	my_scanf("%d%d",&a,&b);
    for (i=9;;i--)
	{
		x[i]=a;a/=2;
		if (x[i]==1) break;
	}
	for (j=i;j<10;j++) x[j-i]=x[j];
	for (i=9;;i--)
	{
		y[i]=b;b/=2;
		if (y[i]==1) break;
	}
	for (j=i;j<10;j++) y[j-i]=y[j];
	for (i=0;;i++)
	{
		if (x[i]!=y[i]) 
		{
			my_printf("%d",x[i-1]);
			break;
		}
	}
}