#define NUM_ITER 1513463

#include <header.h>

int main_bench()
{
	int m,n,i,j,p,sum=0,q=0;
	my_scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
		}
		if(j==i)
		{
			sum=0;
			p=i;
			while(p>0)
			{
				sum=sum*10+p%10;
				p=p/10;
			}
			
			if(sum==i)
			{	q=q+1;
			  if(q==1)
				my_printf("%d",i);
			  if((q!=1)&&(q!=0))
				  my_printf(",%d",i);
				
			}
		}
	}

    if(q==0)
		my_printf("no");
}
