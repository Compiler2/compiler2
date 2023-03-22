#include <header.h>

int main_bench()
{
	long m,n,r,s;
	long t[21],p[21]={0},q=0;
	long x,y,z;
	my_scanf("%ld%ld",&m,&n);
	for(r=m;r<=n;r++)
	{
		x=0;y=1;z=r;
		do
		{
		t[x++]=z%10;
		z=z/10;
		}
		while(z!=0);
		for(s=0;s<=x-1;s++)
			if(t[s]!=t[x-1-s]) y=0;
		if(y==1)
		{
			for(s=2;s<=r-1;s++)
				if(r%s==0) y=0;
		}
		if(y==1) p[q++]=r;
	}
	if(q==0) my_printf("no\n");
	else if(q==1) my_printf("%ld\n",p[0]);
	else
	{for(r=0;r<=q-2;r++)
		my_printf("%ld,",p[r]);
	my_printf("%ld",p[q-1]);}
}



