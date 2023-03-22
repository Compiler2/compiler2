#include <header.h>

int main_bench()
{
	int reverse(int num);
	int a,b,c,d,e,f;
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	my_scanf("%d",&c);
	my_scanf("%d",&d);
	my_scanf("%d",&e);
	my_scanf("%d",&f);
	a=reverse(a);
	b=reverse(b);
	c=reverse(c);
	d=reverse(d);
	e=reverse(e);
	f=reverse(f);
	my_printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,f);
}
    int reverse(int num)
	{
		int w=0,leap=0;
		if(num<0)
		{
			num=0-num;
			leap=1;
		}

		while(num>0)
		{
			w=num%10+10*w;
			num/=10;
		}
		if(leap==1)
		{
			w=0-w;
		}
		return(w);
	}