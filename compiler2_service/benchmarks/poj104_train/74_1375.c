#include <header.h>

int main_bench()
{
	long a,b[10000]={0},c[10000],i,j,k=1,flag=0,l=1,m,n,t;
	my_scanf("%ld%ld",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)break;
			if(j==i)
			{
				b[k]=i;
				k++;
				flag++;
			}
	}
	k--;
	for(i=1;i<=k;i++)
	{
		t=b[i];
		a=0;
		while(t!=0)
		{
			a=10*a+t%10;
			t=t/10;
		}
		if(a==b[i])
		{
			c[l]=b[i];
			l++;
		}
	}
	if(flag==0)my_printf("no");
	else
	{if(l==1)my_printf("no");
	else
	{for(i=1;i<l-1;i++)
		my_printf("%ld,",c[i]);
	my_printf("%ld",c[l-1]);
	}
	}
	return 0;
}
