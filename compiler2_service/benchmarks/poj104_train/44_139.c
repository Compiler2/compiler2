#define NUM_ITER 268575

#include <header.h>

int fanxu(int x)
{
	int sum=0,i,f[10],a=10,p,q;
	for(i=0;i<10;i++)
	{
		f[i]=(x%a)/(a/10);
		x=x-(a/10)*f[i];
		if(x==0)
		{
			break;
		}
		a*=10;
	}
	q=1;
	for(p=0;p<=i;p++)
	{
		sum+=f[i-p]*q;
		q*=10;
	}
	return sum;
}
int main_bench()
{
	int i,k[6],shu;
	for(i=0;i<6;i++)
	{
		my_scanf("%d",&shu);
		if(shu==0)
		{
			k[i]=0;
		}
		if(shu<0)
		{
			k[i]=-1*fanxu(abs(shu));
		}
		else
		{
			k[i]=fanxu(shu);
		}
	}
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",k[i]);
	}
	return 0;
}