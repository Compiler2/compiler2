#define NUM_ITER 4698

#include <header.h>

struct cha
{
	int a;
	float c;
}d[300];
int main_bench()
{
	int n,i,j,o=0,h;
    float k,s=0,z=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&d[i].a);
	}
	for(i=0;i<n;i++)
	{
		z=z+d[i].a;
	}
	s=z/n;
	for(i=0;i<n;i++)
	{
		d[i].c=s-d[i].a;
		if(d[i].c<0)
		{
			d[i].c=(-1)*d[i].c;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(d[i].c<d[i+j].c)
			{
				k=d[i].c;
				d[i].c=d[i+j].c;
				d[i+j].c=k;
				h=d[i].a;
				d[i].a=d[i+j].a;
				d[i+j].a=h;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(d[0].c==d[i].c)
		{
			o++;
		}
	}
	for(i=0;i<o;i++)
	{
		for(j=1;j<n-i;j++)
		{
			if(d[i].a>=d[i+j].a)
			{
				k=d[i].c;
				d[i].c=d[i+j].c;
				d[i+j].c=k;
				h=d[i].a;
				d[i].a=d[i+j].a;
				d[i+j].a=h;
			}
		}
	}
	for(i=0;i<o;i++)
	{
		my_printf("%d,",d[i].a);
	}
	my_printf("%d\n",d[i].a);
	return 0;
}