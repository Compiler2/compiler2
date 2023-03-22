#define NUM_ITER 2695

#include <header.h>

int main_bench()
{
	void pai(int na,int nb);
	int na,nb;
	my_scanf("%d%d",&na,&nb);
	pai(na,nb);

}

void pai(int na,int nb)
{
	int t,i,j,a[200],b[100];
	for(i=0;i<na;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<nb;i++)
	{
		my_scanf("%d",&b[i]);
	}

	for(j=0;j<na-1;j++)
	{
		for(i=0;i<na-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}

	for(j=0;j<nb-1;j++)
	{
		for(i=0;i<nb-1-j;i++)
		{
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
	
	for(j=0;j<na;j++)
		my_printf("%d ",a[j]);
	for(j=0;j<nb-1;j++)
		my_printf("%d ",b[j]);
	my_printf("%d\n",b[nb-1]);
	


}

