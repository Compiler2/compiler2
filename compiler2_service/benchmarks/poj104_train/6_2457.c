#define NUM_ITER 32

#include <header.h>


int main_bench()
{
	int a[10000],*p=a,*q=a,n,h,l,i,j,sum=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=a;
		q=a;
		my_scanf("%d %d",&h,&l);
		
		for(j=1;j<=h*l;j++)
		{
			my_scanf("%d",p++);
		}
		if(h==1)
		{
			for(j=0;j<l;j++)
			{
				sum+=*(q+j);
			}
		}
		else if(l==1)
		{
			sum+=*q;
			sum+=*(q+h-1);
		}
		else
		{
			for(j=0;j<l;j++)
			{
				sum+=*(q+j);
				sum+=*(q+h*l-j-1);
			}
			for(j=1;j<=h-2;j++)
			{
				sum+=*(q+j*l);
				sum+=*(q+j*l+l-1);
			}
		
		}
			my_printf("%d\n",sum);
		sum=0;
	}
	
	
	
	
	
	
	return 0;
}


