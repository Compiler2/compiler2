#include <header.h>

int main_bench()
{
	int n,t=0,i=0,j=0,x[1000],y[1000],m[1000]={0};
	char c=',';
	while(c!='\n')
	{
		my_scanf("%d%c",&x[i++],&c);
	}
	c=',';
	while(c!='\n')
	{
		my_scanf("%d%c",&y[j++],&c);
	}
	n=j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<n;j++)
			if(x[j]<=i&&y[j]>i)
				m[i]++;
	}
	for(i=0;i<1000;i++)
		if(m[i]>t)
			t=m[i];
	my_printf("%d %d",n,t);
}
