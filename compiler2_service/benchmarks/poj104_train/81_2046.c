#define NUM_ITER 233912

#include <header.h>

int a[5][5];
int n,m;
int ser()
{
	int t,i,*p,*q;
	if((n>4||n<0)||(m>4||m<0))
		return 0;
	else
	{
		p=a[n]; q=a[m];
		for(i=0;i<5;i++,p++,q++)
		{
			t=*p; *p=*q; *q=t;
		}
		return 1;
	}
}
int main_bench()
{
	int i,j,t,*p;
	p=a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d %d",&n,&m);
	t=ser();
	if(t==0)
		my_printf("error");
	if(t==1)
	{
		for(i=0;i<5;i++)
		{
		for(j=0;j<4;j++)
			my_printf("%d ",a[i][j]);
		my_printf("%d\n",a[i][4]);
		}
	}
}
