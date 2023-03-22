#include <header.h>

int su(int m)
{
	int p,i;
	if(m==2)
	{
		p=1;
	}
	else if (m==1)
	{
		p=0;
	}
	else
	{
		for(i=2;i<m;i++)
		{
			if(m%i==0) 
			{
				p=0;
				break;
			}
		}
		if(i==m)
		{
			p=1;
		}
	}
	return (p);
}
int hui(int m)
{
	int i=m,j=0,p;
	while(m>0)
	{
		j=j*10+m%10;
		m/=10;
	}
	if(i==j) 
	{
		p=1;
	}
	else
	{
		p=0;
	}
	return(p);
}
int main_bench()
{
	int m,n,count=0;
	my_scanf("%d%d",&m,&n);
	while(m<=n)
	{
		if(su(m)&&hui(m))
		{
			if(count==0)
			{
				my_printf("%d",m);
				count=1;
			}
			else
			{
				my_printf(",%d",m);
			}
		}
		m++;
		
	}
	if(count==0)
	{
		my_printf("no");
	}
	return 0;
}


