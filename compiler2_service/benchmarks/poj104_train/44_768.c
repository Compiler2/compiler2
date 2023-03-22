#define NUM_ITER 449349

#include <header.h>

int reverse(int a)
{
	int k,p=0,m=0;
	if(a<0)
	{
		m=-a;
		while(m>0)
		{
			k=m%10;
			p=p*10+k;
			m=m/10;
		}
		p=-p;
	}
	else if(a>0)
	{
		m=a;
		while(m>0)
		{
			k=m%10;
			p=p*10+k;
			m=m/10;
		}
	}
	else if(a==0)
	  p=0;
	return p;
}
int main_bench()
{
	int reverse(int a);
	int i,b[6];
	for(i=0;i<6;i++)
	{
		my_scanf("%d",&b[i]);
		b[i]=reverse(b[i]);
	}
	for(i=0;i<6;i++)
	{
		my_printf("%d\n",b[i]);
	}
	return 0;
}





