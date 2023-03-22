#include <header.h>

int main_bench()
{
	int x[1000];
	int y[1000];
	char a,b;
	int i,j,k=0,r=0,n=0;
	for(i=0;;i++)
	{
		my_scanf("%d%c",&x[i],&a);
		n=n+1;
		if(a!=',')break;
	}
	for(i=0;;i++)
	{
		my_scanf("%d%c",&y[i],&b);
		if(b!=',')break;
	}
	for(j=0;j<1000;j++)
	{
		for(i=0;i<n;i++)
		{
			if(j>=x[i]&&j<y[i])k=k+1;
		}
		if(k>r)
		{
			r=k;
		}
		k=0;
	}
	my_printf("%d %d",n,r);


}
