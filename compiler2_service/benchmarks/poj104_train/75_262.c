#include <header.h>

int main_bench()
{
	int x[1100],y[1100],i,n=0,max=0,min=1000,j,most=0,p;
	char b;
	do
	{
		my_scanf("%d",&x[n]);
		b=getchar();
		n++;
	}
	while(b==',');
	n=0;
    do
	{
		my_scanf("%d",&y[n]);
		b=getchar();
		n++;
	}
	while(b==',');
	my_printf("%d ",n);
	for(i=0;i<n;i++)
	{
		if(x[i]<min) min=x[i];
		if(y[i]>max) max=y[i];
	}

	for(i=min;i<max;i++)
	{
		p=0;
		for(j=0;j<n;j++)
			if(x[j]<=i&&y[j]>i) p++;
		if(p>most) most=p;
	}
	my_printf("%d\n",most);


}
