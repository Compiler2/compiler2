#define NUM_ITER 906381

#include <header.h>


int main_bench()
{
	int la,lb,i,d;
	double t,tt;
	char a[505],b[505];
	my_scanf("%lf",&t);
	my_scanf("%s",a);
	my_scanf("%s",b);
	la=strlen(a);
	lb=strlen(b);
	d=-1;
	if(la==lb)
	{
		d=0;
		for(i=0;i<la;i++)
		{
			if(a[i]==b[i])
			{
				d++;
			}
			if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
			{
				d=-1;
				break;
			}
		}
	}
	if(d<0)
		my_printf("error");
	else
	{
		tt=d*1.000/la;
		if(tt>t)
			my_printf("yes");
		else
			my_printf("no");
	}
	
	return 0;
}