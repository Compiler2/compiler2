#define NUM_ITER 924879

#include <header.h>

int main_bench()
{
	int l,i,t=0,s,d=1;
	double b,x=0.0;
	char a[501],c[501];
	my_scanf("%lf",&b);
	my_scanf("%s",a);
	my_scanf("%s",c);
	l=strlen(a);
	s=strlen(c);
	if(l==s)
	{
		for(i=0;i<l;i++)
		{
			if((a[i]!='A'&&a[i]!='G'&&a[i]!='C'&&a[i]!='T')||(c[i]!='A'&&c[i]!='G'&&c[i]!='C'&&c[i]!='T'))
			{
				d=0;
				break;
			}
			else if(a[i]==c[i])
				t++;
			else
				t=t;
		}
		if(d!=0)
		{
		x=1.0*t/l;
		if(x>=b)
			my_printf("yes\n");
		else
			my_printf("no\n");
		}
		else
			my_printf("error\n");
	}
	else
		my_printf("error\n");
	return 0;
}