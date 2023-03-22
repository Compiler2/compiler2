#define NUM_ITER 72983

#include <header.h>

int main_bench()
{
	int i,n,a,b,c,s=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a=i/100;
		b=(i-a*100)/10;
		c=i-a*100-b*10;
		if ((i%7==0)||(a==7)||(b==7)||(c==7)) continue;
		else s=s+i*i;
	}
	my_printf("%d\n",s);



}
