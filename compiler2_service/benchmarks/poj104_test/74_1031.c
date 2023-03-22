#include <header.h>

int main_bench()
{
	int m,n,k=0,i,j,a,b,c,d;
	int p[1000];
	my_scanf("%d %d",&m,&n);
	for(a=m;a<=n;a++)
	{
		i=2;
		do
		{
			b=a%i;
			i++;
		}
		while(b!=0&&i<a);
		if(i==a)
		{
			b=0;
			d=a;
			do
			{
				c=d%10;
				b=b*10+c;
				d=d/10;
			}
			while(d!=0);
			if(a==b)
			{
				k=k+1;
				p[k]=a;
			}
		}
	}
	if(k==0)
		my_printf("no");
	else
	{
	for(i=1;i<=k-1;i++)
		my_printf("%d,",p[i]);
	my_printf("%d",p[k]);
	}
}

				

		

