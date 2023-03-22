#define NUM_ITER 10

#include <header.h>

int main_bench()
{
	int t,n,m,i,s,a[301];
	my_scanf("%d%d",&n,&m);
	while(n!=0)
	{
		for(i=1;i<=300;i++) a[i]=0;
		i=0;s=n;
		for(;s>=1;)
		{
			t=m;
			s--;
			while (t>0)
			{
				i=((1+i)>n)? 1:(i+1);
				while (a[i]) i=((1+i)>n)? 1:(i+1);
				t--;
			}
			a[i]=1;

		}
		my_printf("%d\n",i); 
	    my_scanf("%d%d",&n,&m);
	}
}
