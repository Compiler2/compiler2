#define NUM_ITER 20895

#include <header.h>

int main_bench()
{
	int x[100000];
	int i,j,n,s,y,p;
	int b[100000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d %d %d",&x[i],&y,&p);
		b[i]=y+p;
	}
	int t;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(b[j]>b[i])
			{
				s=x[i];
				x[i]=x[j];
				x[j]=s;
				t=b[i];
				b[i]=b[j];
				b[j]=t;
				
			}

		}

	}
	for(i=0;i<3;i++)
	{
	my_printf("%d %d\n",x[i],b[i]);
	}
	return 0;
}