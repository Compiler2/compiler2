#define NUM_ITER 1504549

#include <header.h>

int main_bench()
{
	int a,b,i,j,k,t,s,n,m;
	my_scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		n=i;s=0;
		for(k=2;k<=(n/2);k++)
		{
			if(n%k==0)
			{s=s+1;
			break;
			}
		}
		if(s==0)
		{
		for(;;)
		{
			t=n%10;
			s=s*10+t;
			n=n/10;
			if(n==0)
				break;
		}
		if(s==i)
		{my_printf("%d",i);
		break;}
		}
	}
	if(i>b)
		my_printf("no");

		for(j=i+1;j<=b;j++)
	{
		m=j;s=0;
		for(k=2;k<(m/2);k++)
		{
			if(m%k==0)
			{s=s+1;
			break;
			}
		}
			if(s==0)
			{
		for(;;)
		{
			t=m%10;
			s=s*10+t;
			m=m/10;
			if(m==0)
				break;
		}
		if(s==j)
			my_printf(",%d",j);
			}
	}
     	return 0;
}