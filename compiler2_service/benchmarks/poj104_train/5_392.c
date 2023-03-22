#define NUM_ITER 918495

#include <header.h>

int main_bench()
{
	int i,t=0,s=0,l1,l2;
	double n,m;
    char a[256],b[256];
	my_scanf("%lf",&n);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	l1=strlen(a);
	l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G'))
		{
			s=s+1;
		}
	}
	if(s!=0||l1!=l2)
	{
		my_printf("error");
	}
	else
	{
		for(i=0;i<l1;i++)
		{
			if(a[i]==b[i])
			{
				t=t+1;
			}
		}
		m=(double)t/l1;
		if(m>n)
		{
			my_printf("yes");
		}
		else my_printf("no");
	}
return 0;
}  