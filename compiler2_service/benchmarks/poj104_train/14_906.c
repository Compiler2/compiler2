#define NUM_ITER 28543

#include <header.h>

int main_bench()
{
	int x,i,n,m=0,j=0,k=0,s,l1,l2,l3;
	int a[100000],b[100000];
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d%d%d",&x,&(a[i]),&(b[i]));
		s=a[i]+b[i];
		if(s>m)
		{
			
			j=m;
			m=s;
			l2=l1;
			l1=i;}
		else if(s>j)
		{
		k=j;
		j=s;
		l3=l2;
		l2=i;}
		else if(s>k)
		{	k=s;
		l3=i;}
	}
	my_printf("%d %d\n",l1,m);
	my_printf("%d %d\n",l2,j);
	my_printf("%d %d\n",l3,k);
	return 0;
}

