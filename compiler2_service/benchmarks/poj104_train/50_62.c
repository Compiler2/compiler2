#include <header.h>

int main_bench()
{
	int w,d=12,i;
	my_scanf("%d",&w);
	int p[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<13;i++)
	{
		d+=p[i];
		if(d%7+w==5||d%7+w==12)
			my_printf("%d\n",i+1);
	}
}


