#define NUM_ITER 10615

#include <header.h>

int main_bench()
{
	int i,n,a,b,c,d,e,f,x,y,z,t;
	n=100;
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)
		{
			break;
		}
			else
			{
			d+=12;
			if(f<c)
			{
				f+=60;
				z=f-c;
				e--;
			}
			else
			{
				z=f-c;
			}
			if(e<b)
			{
				e+=60;
				y=e-b;
				d--;
			}
			else
			{
				y=e-b;
			}
			x=d-a;
			t=3600*x+60*y+z;
			my_printf("%d\n",t);
		}
	}
	return 0;
}