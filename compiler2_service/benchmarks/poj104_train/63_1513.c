#define NUM_ITER 29

#include <header.h>

int main_bench()
{
	int a[100][100],b[100][100],c[100][100];
	int i,j,x,y,p,q,k,m,n,sum=0,t;
	my_scanf("%d %d",&i,&j);
	for(n=0;n<i;n++)
	{
		for(m=0;m<j;m++)
			my_scanf("%d",&a[n][m]);

	}
	my_scanf("%d %d",&x,&y);
	for(n=0;n<x;n++)
	{
		for(m=0;m<y;m++)
			my_scanf("%d",&b[n][m]);

	}
	for(p=0;p<i;p++)
	{
		for(q=0;q<y;q++)
		{
			for(k=0;k<j;k++)
			{
			    t=a[p][k]*b[k][q];
				sum=sum+t;
				c[p][q]=sum;
			}
			sum=0;
		}
	}
	for(p=0;p<i;p++)
	{
		for(q=0;q<y;q++)
		{
			if(q<y-1)
				my_printf("%d ",c[p][q]);
			if(q==y-1&&p!=i-1)
				my_printf("%d\n",c[p][q]);
			if(q==y-1&&p==i-1)
				my_printf("%d",c[p][q]);
		}
	}
	return 0;
	

}