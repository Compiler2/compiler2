#include <header.h>

int main_bench()
{
	int x[1000], y[1000], i, j=0;
	my_scanf("%d%d", &x[0], &y[0]);
	while(y[j]!=1)
	{
        j=j+1;
		y[j]=y[j-1]/2;
	}
	j=0;i=0;
	while (x[i]<y[j]) j++;
	while (x[i]!=y[j])
	{
		i=i+1;
		x[i]=x[i-1]/2;
        while (x[i]<y[j]) j++;
	}
    my_printf("%d\n",x[i]);
	return 0;
}