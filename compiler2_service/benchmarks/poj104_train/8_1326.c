#define NUM_ITER 2658

#include <header.h>





int a[5000],b[5000],N1,N2,c[10000];
int f1()
{
	int n;
	my_scanf("%d%d",&N1,&N2);
	for(n=0;n<=N1-1;n++)
	{
		my_scanf("%d",&a[n]);
	}
	for(n=0;n<=N2-1;n++)
	{
		my_scanf("%d",&b[n]);
	}
	return 0;
}
int f2()
{
	int i,j,t;
	for(i=1;i<=N1-1;i++)
	{
		for(j=0;j<=N1-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=1;i<=N2-1;i++)
	{
		for(j=0;j<=N2-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	return 0;
}
int f3()
{
	int i,j;
	for(i=0;i<=N1-1;i++)
	{
		c[i]=a[i];
	}
	for(i=N1,j=0;i<=N1+N2-1;i++,j++)
	{
		c[i]=b[j];
	}
	return 0;
}
int f4()
{
	int i;
	my_printf("%d",c[0]);
	for(i=1;i<=N1+N2-1;i++)
	{
		my_printf(" %d",c[i]);
	}
	return 0;
}
int main_bench()
{
	f1();
	f2();
	f3();
	f4();
}
