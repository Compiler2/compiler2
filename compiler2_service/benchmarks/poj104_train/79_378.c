#define NUM_ITER 269

#include <header.h>

int main_bench()
{
	int a[300],b,c,d,e,f,g=1,h;
	for(h=0;h<10000;h++)
	{
	my_scanf("%d%d",&b,&c);
	if(b!=0&&c!=0)
	{
	for(d=0;d<b;d++)
		a[d]=1;
	for(e=0,f=b;f>1;e++)
	{
		if(e<b)
		{
			if(a[e]!=0)
			{
				if(g==c)
				{
					a[e]=0;
					f=f-1;
					g=0;
				}
				g=g+1;
			}
		}
		else
			e=-1;
	}
	for(e=0;e<b;e++)
		if(a[e]!=0)
			my_printf("%d\n",e+1);
	}
	else
		break;
	}
}


			



